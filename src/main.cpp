/*
** EPITECH PROJECT, 2022
** raylibTest
** File description:
** mytake
*/

#include <iostream>
#include <list>
#include "Entity.hpp"
#include "TextureRenderer.hpp"
#include "MeshRenderer.hpp"
#include "LocalTransform.hpp"
#include "Sprite.hpp"

Camera3D makeCamera(void)
{
    Camera camera = { 0 };
    camera.position = (Vector3){ 50.0f, 50.0f, 50.0f }; // Camera position
    camera.target = (Vector3){ 0.0f, 10.0f, 0.0f };     // Camera looking at point
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    camera.fovy = 45.0f;                                // Camera field-of-view Y
    camera.projection = CAMERA_PERSPECTIVE;                   // Camera mode type

    // Define the camera to look into our 3d world
    SetCameraMode(camera, CAMERA_FREE);
    return camera;
}

Entity *makeWheel(std::vector<float> position)
{
    Entity *res = new Entity;
    LocalTransform *tr = new LocalTransform(position);
    CMesh *mesh = new CMesh("Ressources/wheel.glb", "Ressources/WheelTexture.png");

    res->addComponent(tr, transform);
    res->addComponent(mesh, cmesh);
    return (res);
}

void destroyWheel(Entity *wheel)
{
    delete wheel->popComponent(transform);
    delete wheel->popComponent(cmesh);
    delete wheel;
}

int main(void)
{
    InitWindow(1280, 720, "indie");
    TextureRenderer trenderer;
    MeshRenderer mrenderer;
    Camera3D cam = makeCamera();
    std::list<ISystem *>systems;
    std::list<Entity *> entities;
    Entity trucMoche;
    LocalTransform tro;
    Sprite sprite("Ressources/WheelTexture.png");
    Entity *wheel_a = makeWheel({0, 0, 5});
    Entity *wheel_b = makeWheel({0, 0, 0});
    Entity *wheel_c = makeWheel({0, 5 ,0});
    Entity *wheel_d = makeWheel({0, 5, 5});

    systems.push_front(&trenderer);
    systems.push_front(&mrenderer);
    trucMoche.addComponent(&tro, componentType::transform);
    trucMoche.addComponent(&sprite, componentType::texture);
    entities.push_front(wheel_a);
    entities.push_front(wheel_b);
    entities.push_front(wheel_c);
    entities.push_front(wheel_d);
    entities.push_front(&trucMoche);
    while (!WindowShouldClose()) {
        cam.fovy += 0.1;
        if (cam.fovy > 360.0)
            cam.fovy = 45.0;
        BeginDrawing();
        BeginMode3D(cam);
        ClearBackground(RAYWHITE);
        for (std::list<ISystem *>::iterator its = systems.begin(); its != systems.end(); its++) {
            for (std::list<Entity *>::iterator ite = entities.begin(); ite != entities.end(); ite++)
                (*its)->executeSystem(*ite);
        }
        EndMode3D();
        EndDrawing();
    }
    CloseWindow();
    destroyWheel(wheel_a);
    destroyWheel(wheel_b);
    destroyWheel(wheel_c);
    destroyWheel(wheel_d);
    return (0);
}