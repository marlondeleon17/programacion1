#include "calculadoras.h"
#include <stdexcept>  // Necesario para manejar errores como la divisi�n por cero

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
        throw std::runtime_error("Error: Divisi�n por cero no permitida.");
    }
    return a / b;
}
