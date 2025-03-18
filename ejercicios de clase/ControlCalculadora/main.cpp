#include <iostream>
#include "calculadoras.h"

using namespace std;

int main() {
    double num1, num2;
    char operacion;
    char continuar;

    Calculadora calc;  // Crear un objeto de la clase Calculadora

    do {
        cout << "Ingrese el primer numero: ";
        cin >> num1;

        cout << "Ingrese la operacion (+, -, *, /): ";
        cin >> operacion;

        cout << "Ingrese el segundo numero: ";
        cin >> num2;

        double resultado;

        try {
            switch (operacion) {
                case '+':
                    resultado = calc.sumar(num1, num2);
                    break;
                case '-':
                    resultado = calc.restar(num1, num2);
                    break;
                case '*':
                    resultado = calc.multiplicar(num1, num2);
                    break;
                case '/':
                    resultado = calc.dividir(num1, num2);
                    break;
                default:
                    cout << "Operación no válida." << endl;
                    continue; // Salta a la siguiente iteración del bucle
            }

            cout << "El resultado es: " << resultado << endl;
        } catch (const exception& e) {
            cout << e.what() << endl;
        }

        cout << "¿Desea realizar otra operación? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    cout << "Gracias por usar la calculadora. ¡Hasta luego!" << endl;

    return 0;
}
