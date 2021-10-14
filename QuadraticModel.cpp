//
// Created by Jacob Corcho on 10/14/21.
//

#pragma once

#include "QuadraticModel.h"
#include <iostream>
#include <math.h>

float QuadraticModel::GetNegativeRoot(float a, float b, float c) {

    // Return if pass check fails/returns false
    if(!CheckDiscriminant(a, b, c)) {
        return 0;
    }

    // Math logic for negative root
    float solution = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    return solution;

}

float QuadraticModel::GetPositiveRoot(float a, float b, float c) {
    // Return if pass check fails/returns false
    if(!CheckDiscriminant(a, b, c)) {
        return 0;
    }

    // Math logic for positive root
    float solution = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    return solution;
}

bool QuadraticModel::CheckDiscriminant(float a, float b, float c) {
    float solution = pow(b, 2) - (4*a*c);
    if(solution >= 0)
        return true;

    return false;
}
