#ifndef CALCULADORA_H
#define CALCULADORA_H

template <class type>
class Calculadora {
    private:
    public:
        Calculadora();
        ~Calculadora();
        static type suma(type, type);
        static type resta(type, type);
        static type multiplicacion(type, type);
        static type division(type, type);
};

#include "Calculadora.cpp"

#endif