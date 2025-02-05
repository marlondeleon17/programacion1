#include <iostream>
using namespace std;

int main() {
    int opcion;
    double num1,num2,suma,resta,multi,divn;


    cout << "selecione una opcion: \n";
    cout << " 1 -- suma \n";
    cout << " 2 -- resta \n";
    cout << " 3 -- multiplicacion \n";
    cout << " 4 -- division \n\n";

    cout << "ingrese la opcion: \n";
    cin >> opcion;

    cout << "ingrese el primer numero: \n";
    cin >> num1;
    cout << "ingrese el segundo numero: \n";
    cin >> num2;

    switch (opcion) {
    case 1:
    suma = num1+num2;
    cout<<"la suma es: "<<suma<<endl;
    break;
    case 2:
    resta = num1-num2;
    cout<<"la resta es: "<<resta<<endl;
    break;
    case 3:
    resta = num1*num2;
    cout<<" la multiplicacion es: "<<multi<<endl;
    break;
    case 4:
    resta = num1/num2;
    cout<<"division es: "<<divn<<endl;
    break;


    }


    return 0;
}
