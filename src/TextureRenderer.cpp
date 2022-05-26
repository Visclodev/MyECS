/*
** EPITECH PROJECT, 2022
** raylibTest
** File description:
** TextureRenderer
*/

#include "TextureRenderer.hpp"

TextureRenderer::TextureRenderer()
{
}

TextureRenderer::~TextureRenderer()
{
}

void TextureRenderer::executeSystem(Entity *entity)
{
    if (!entity->hasComponent(componentType::texture))
        return;
    if (!entity->hasComponent(componentType::transform))
        return;
    Sprite *sprite = static_cast<Sprite *>(entity->getComponent(texture));
    LocalTransform *tr = static_cast<LocalTransform *>(entity->getComponent(transform));
    Vector2 position;
    position.x = tr->position[0];
    position.y = tr->position[1];
    DrawTexture(sprite->texture, position.x, position.y, WHITE);
}