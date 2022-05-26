/*
** EPITECH PROJECT, 2022
** raylibTest
** File description:
** MeshRenderer
*/

#ifndef MESHRENDERER_HPP_
#define MESHRENDERER_HPP_

#include "ISystem.hpp"
#include "LocalTransform.hpp"
#include "CMesh.hpp"

class MeshRenderer : public ISystem {
    public:
        MeshRenderer();
        ~MeshRenderer();

        void executeSystem(Entity *entity);
    protected:
    private:
};

#endif /* !MESHRENDERER_HPP_ */
