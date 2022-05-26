/*
** EPITECH PROJECT, 2022
** raylibTest
** File description:
** CMesh
*/

#include "CMesh.hpp"

CMesh::CMesh(std::string modelFilepath, std::string textureFilepath)
{
    this->model = LoadModel(modelFilepath.c_str());
    this->model.materials[0].maps[MATERIAL_MAP_ALBEDO].texture = LoadTexture(textureFilepath.c_str());
}

CMesh::~CMesh()
{
}