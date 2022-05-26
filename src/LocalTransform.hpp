/*
** EPITECH PROJECT, 2022
** raylibTest
** File description:
** LocalTransform
*/

#ifndef LOCALTRANSFORM_HPP_
#define LOCALTRANSFORM_HPP_

#include "IComponent.hpp"
#include <vector>

class LocalTransform : public IComponent {
    public:
        LocalTransform(std::vector<float> position = {0, 0, 0});
        ~LocalTransform();

        std::vector<float> position;
    protected:
    private:
};

#endif /* !LOCALTRANSFORM_HPP_ */
