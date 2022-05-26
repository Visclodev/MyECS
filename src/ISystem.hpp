/*
** EPITECH PROJECT, 2022
** raylibTest
** File description:
** ISystem
*/

#ifndef ISYSTEM_HPP_
#define ISYSTEM_HPP_

#include "raylib.h"
#include "Entity.hpp"

class ISystem {
    public:
        virtual ~ISystem() = default;

        virtual void executeSystem(Entity *entity) = 0;
    protected:
    private:
};

#endif /* !ISYSTEM_HPP_ */
