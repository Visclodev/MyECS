/*
** EPITECH PROJECT, 2022
** raylibTest
** File description:
** CMesh
*/

#ifndef CMESH_HPP_
#define CMESH_HPP_

#include "IComponent.hpp"
#include <iostream>

class CMesh : public IComponent{
    public:
        CMesh(std::string modelFilepath, std::string textureFilepath);
        ~CMesh();

        Model model;
    protected:
    private:
};

#endif /* !CMESH_HPP_ */
