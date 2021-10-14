#include <iostream>
#include "QuadraticModel.h"

int main() {
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|  Quadratic Equation Solver  |" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    QuadraticModel qm;

    while(true) {
        std::cout << "(0). Enter -1 to exit" << std::endl;

        std::cout << "(1). What is the value of 'a'?" << std::endl;
        std::cin >> qm.a;
        if(qm.a == -1) {break;}
        std::cout << "(2). What is the value of 'b'?" << std::endl;
        std::cin >> qm.b;
        if(qm.b == -1) {break;}
        std::cout << "(3). What is the value of 'c'?" << std::endl;
        if(qm.c == -1) {break;}
        std::cin >> qm.c;

        if(!QuadraticModel::CheckDiscriminant(qm.a, qm.b, qm.c)) {
            std::cout << " - [ERROR]: No solution exists - CheckDiscriminant test failed" << std::endl;
        } else {
            std::cout << "-----------------------------------------" << std::endl;
            std::cout << "| Negative Root Sum | Positive Root Sum |" << std::endl; // <-- passing the arguments here might be redundant because they're already set through the cm object
            std::cout << "-----------------------------------------" << std::endl;
            std::cout << "|      " << QuadraticModel::GetNegativeRoot(qm.a, qm.b, qm.c) << "      |      " << QuadraticModel::GetPositiveRoot(
                    qm.a, qm.b, qm.c) << "     |" << std::endl;
        }
    }

    std::cout << "Goodbye!" << std::endl;
    exit(0);
}
