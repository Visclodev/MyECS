/*
** EPITECH PROJECT, 2022
** Clovis SCHNEIDER
** File description:
** Entity
*/

#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include "IComponent.hpp"
#include <map>

class Entity {
    public:
        Entity();
        ~Entity();

        void addComponent(IComponent *component, componentType type);
        IComponent *popComponent(componentType type);
        bool hasComponent(componentType type);
        IComponent *getComponent(componentType type);
    protected:
    private:
        std::map<componentType, IComponent *> _components;
};

#endif /* !ENTITY_HPP_ */
