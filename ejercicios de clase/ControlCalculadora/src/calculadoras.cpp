#include "calculadoras.h"
#include <stdexcept>  // Necesario para manejar errores como la división por cero

double Calculadora::sumar(double a, double b) {
    return a + b;
}

double Calculadora::restar(double a, double b) {
    return a - b;
}

double Calculadora::multiplicar(double a, double b) {
    return a * b;
}

double Calculadora::dividir(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Error: División por cero no permitida.");
    }
    return a / b;
}
