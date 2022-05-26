/*
** EPITECH PROJECT, 2022
** raylibTest
** File description:
** MeshRenderer
*/

#include "MeshRenderer.hpp"

MeshRenderer::MeshRenderer()
{
}

MeshRenderer::~MeshRenderer()
{
}

void MeshRenderer::executeSystem(Entity *entity)
{
    if (!entity->hasComponent(componentType::cmesh))
        return;
    if (!entity->hasComponent(componentType::transform))
        return;
    CMesh *mesh = static_cast<CMesh *>(entity->getComponent(componentType::cmesh));
    LocalTransform *tr = static_cast<LocalTransform *>(entity->getComponent(transform));
    Vector3 position;
    position.x = tr->position[0];
    position.y = tr->position[1];
    position.z = tr->position[2];
    DrawModel(mesh->model, position, 1.0, WHITE);
}