/*
** EPITECH PROJECT, 2022
** raylibTest
** File description:
** Entity
*/

#include "Entity.hpp"

Entity::Entity()
{
}

Entity::~Entity()
{
}

void Entity::addComponent(IComponent *component, componentType type)
{
    this->_components[type] = component;
}

IComponent *Entity::popComponent(componentType type)
{
    IComponent *res = this->_components[type];

    this->_components.erase(type);
    return (res);
}

bool Entity::hasComponent(componentType type)
{
    return this->_components.contains(type);
}

IComponent *Entity::getComponent(componentType type)
{
    return this->_components[type];
}