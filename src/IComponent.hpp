/*
** EPITECH PROJECT, 2022
** raylibTest
** File description:
** IComponent
*/

#ifndef ICOMPONENT_HPP_
#define ICOMPONENT_HPP_

#include "raylib.h"
#include <iostream>

enum componentType {
    texture,
    transform,
    cmesh
};

class IComponent {
    public:
        virtual ~IComponent() = default;

    protected:
    private:
};

#endif /* !ICOMPONENT_HPP_ */
