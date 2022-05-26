/*
** EPITECH PROJECT, 2022
** raylibTest
** File description:
** Sprite
*/

#include "Sprite.hpp"

Sprite::Sprite(std::string filepath)
{
    this->texture = LoadTexture(filepath.c_str());
}

Sprite::~Sprite()
{
    UnloadTexture(this->texture);
}
