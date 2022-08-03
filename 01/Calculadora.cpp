#include "Calculadora.h"

template <class type>
Calculadora<type>::Calculadora() {}

template <class type>
Calculadora<type>::~Calculadora() {}

template <class type>
type Calculadora<type>::suma(type a, type b) {
    return a + b;
}

template <class type>
type Calculadora<type>::resta(type a, type b) {
    return a - b;
}

template <class type>
type Calculadora<type>::multiplicacion(type a, type b) {
    return a * b;
}

template <class type>
type Calculadora<type>::division(type a, type b) {
    return a / b;
}