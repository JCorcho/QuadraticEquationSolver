//
// Created by Jacob Corcho on 10/14/21.
//

#pragma once


class QuadraticModel {
public:
    static float GetNegativeRoot(float a, float b, float c);
    static float GetPositiveRoot(float a, float b, float c);
    static bool CheckDiscriminant(float a, float b, float c);
    float a{},b{},c{};
private:
};


