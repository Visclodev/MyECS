/*
** EPITECH PROJECT, 2022
** raylibTest
** File description:
** TextureRenderer
*/

#ifndef TEXTURERENDERER_HPP_
#define TEXTURERENDERER_HPP_

#include "ISystem.hpp"
#include "Sprite.hpp"
#include "LocalTransform.hpp"

class TextureRenderer : public ISystem {
    public:
        TextureRenderer();
        ~TextureRenderer();

        void executeSystem(Entity *entity);
    protected:
    private:
};

#endif /* !TEXTURERENDERER_HPP_ */
