#include <iostream>
#include "Calculadora.h"

int main() {
    int ai = 5;
    int bi = 15;
    std::cout << Calculadora<int>::suma(ai, bi) << std::endl;
    std::cout << Calculadora<int>::resta(ai, bi) << std::endl;
    std::cout << Calculadora<int>::multiplicacion(ai, bi) << std::endl;
    std::cout << Calculadora<int>::division(ai, bi) << std::endl;
    return 0;
}