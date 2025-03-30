#include "Campeonato.h"

void ingresaCiclo() {
    char opcion;
    string equipos[NUM_EQUIPOS];
    int resultados[NUM_EQUIPOS][NUM_EQUIPOS] = {0};
    int puntos[NUM_EQUIPOS] = {0}, partidos[NUM_EQUIPOS] = {0}, ganados[NUM_EQUIPOS] = {0}, empatados[NUM_EQUIPOS] = {0}, perdidos[NUM_EQUIPOS] = {0};
    bool repetir = true;

    do {
        ingresarequipos(equipos);
        cout << "\nDesea ingresar los resultados manualmente (M) o generarlos aleatoriamente (A)? ";
        cin >> opcion;
        generadorresultados(resultados, (opcion == 'A' || opcion == 'a'));
        calculoresultados(resultados, equipos, puntos, partidos, ganados, empatados, perdidos);
        imprimirresultados(equipos, puntos, partidos, ganados, empatados, perdidos);
        determinarCD(equipos, puntos);

        cout << "\nDesea jugar otro campeonato? (S/N): ";
        cin >> opcion;

        if (opcion == 'n' || opcion == 'N') {
            repetir = false;
        }
    } while (repetir);
}

void ingresarequipos(string equipos[]) {
    cout << "Ingrese los nombres de los 6 equipos: " << endl;
    for (int i = 0; i < NUM_EQUIPOS; i++) {
        cout << "Equipo " << (i + 1) << ": ";
        cin >> equipos[i];
    }
}

void generadorresultados(int resultados[NUM_EQUIPOS][NUM_EQUIPOS], bool aleatorio) {
    for (int i = 0; i < NUM_EQUIPOS; i++) {
        for (int j = 0; j < NUM_EQUIPOS; j++) {
            if (i != j) {
                if (aleatorio) {
                    resultados[i][j] = rand() % (NUM_GOLES + 1);
                    resultados[j][i] = rand() % (NUM_GOLES + 1);
                } else {
                    cout << "Ingrese marcador de " << i + 1 << " vs " << j + 1 << ": ";
                    cin >> resultados[i][j];
                    cout << "Ingrese marcador de " << j + 1 << " vs " << i + 1 << ": ";
                    cin >> resultados[j][i];
                }
            }
        }
    }
}

void calculoresultados(int resultados[NUM_EQUIPOS][NUM_EQUIPOS], string equipos[], int puntos[], int partidos[], int ganados[], int empatados[], int perdidos[]) {
    for (int i = 0; i < NUM_EQUIPOS; i++) {
        puntos[i] = partidos[i] = ganados[i] = empatados[i] = perdidos[i] = 0;
        for (int j = 0; j < NUM_EQUIPOS; j++) {
            if (i != j) {
                partidos[i]++;
                if (resultados[i][j] > resultados[j][i]) {
                    puntos[i] += 3;
                    ganados[i]++;
                } else if (resultados[i][j] == resultados[j][i]) {
                    puntos[i] += 1;
                    empatados[i]++;
                } else {
                    perdidos[i]++;
                }
            }
        }
    }
}

void imprimirresultados(string equipos[], int puntos[], int partidos[], int ganados[], int empatados[], int perdidos[]) {
    cout << "\nTabla de posiciones:" << endl;
    cout << "Equipo\tPJ\tG\tE\tP\tPuntos" << endl;
    for (int i = 0; i < NUM_EQUIPOS; i++) {
        cout << equipos[i] << "\t" << partidos[i] << "\t" << ganados[i] << "\t" << empatados[i] << "\t" << perdidos[i] << "\t" << puntos[i] << endl;
    }
}

void determinarCD(string equipos[], int puntos[]) {
    int maxPuntos = -1, minPuntos = 1000;
    int campeonIdx = 0, descensoIdx = 0;

    for (int i = 0; i < NUM_EQUIPOS; i++) {
        if (puntos[i] > maxPuntos) {
            maxPuntos = puntos[i];
            campeonIdx = i;
        }
        if (puntos[i] < minPuntos) {
            minPuntos = puntos[i];
            descensoIdx = i;
        }
    }

    cout << "\nEl equipo campeon es: " << equipos[campeonIdx] << " con " << maxPuntos << " puntos!" << endl;
    cout << "El equipo que desciende es: " << equipos[descensoIdx] << " con " << minPuntos << " puntos." << endl;
}
