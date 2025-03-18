#include <iostream>
using namespace std;

class Estudiante {
public:
    string nombre;
    int edad;
    string zona;

    Estudiante(string pNombre, int pEdad, string pZona) {
        nombre = pNombre;
        edad = pEdad;
        zona = pZona;
    }

    void MostrarInformacion() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << ", Zona en que vive: " << zona << endl;
    }

     void Expresarse() {
        cout << nombre << " bienvenidos" << endl;
    }
};

int main() {
    Estudiante estudiante1("Mario", 20, "Zona 1");
    Estudiante estudiante2("Luisa", 22, "Zona 5");
    Estudiante estudiante3("Carlos", 19, "Zona 3");

    cout << "Informacion de los estudiantes:" << endl;
    estudiante1.MostrarInformacion();
    estudiante2.MostrarInformacion();
    estudiante3.MostrarInformacion();


    cout << "\n\n Saludos" << endl;
    estudiante1.Expresarse();
    estudiante2.Expresarse();
    estudiante3.Expresarse();
    return 0;
}
