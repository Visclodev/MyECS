/*
** EPITECH PROJECT, 2022
** raylibTest
** File description:
** Sprite
*/

#ifndef SPRITE_HPP_
#define SPRITE_HPP_

#include "IComponent.hpp"

class Sprite : public IComponent {
    public:
        Sprite(std::string filepath);
        ~Sprite();

        Texture texture;
    protected:
    private:
};

#endif /* !SPRITE_HPP_ */
