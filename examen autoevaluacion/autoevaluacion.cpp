#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define NUM_PARTIDOS 4
#define NUM_VOTOS 50
void ingresaproceso();
void ingresarpartidos(string partido[]);
void genaradorresultados(int resultados[NUM_PARTIDOS][NUM_PARTIDOS], bool aleatorio);
void calculoresultados(int resultados[NUM_PARTIDOS][NUM_PARTIDOS], string partido[], int ronda1[], int ronda2[], int ronda3[], int ronda4[], int votos[]);
void imprimirresultados(string partido[], int votos[], int ronda1[], int ronda2[], int ronda3[], int ronda4[]);
void determinarCD(string partido[], int votos[]);

int main()
{
    srand (time(0));
    ingresaproceso();
    return 0;
}


void ingresaproceso()
{
    char opcion;
    srand(time(0));
    string partido[NUM_PARTIDOS];
    int resultados[NUM_PARTIDOS][NUM_PARTIDOS] = {0};
    int votos[NUM_PARTIDOS] = {0}, ronda1[NUM_PARTIDOS] = {0}, ronda2[NUM_PARTIDOS] = {0}, ronda3[NUM_PARTIDOS] = {0}, ronda4[NUM_PARTIDOS] = {0};
    bool repetir = true;

    do
    {
        ingresarpartidos(partido);
        cout << "\nDesea ingresar los resultados manualmente (M) o generarlos aleatoriamente (A)? ";
        cin >> opcion;
        genaradorresultados(resultados, (opcion == 'A' || opcion == 'a'));
        calculoresultados(resultados, partido, votos, ronda1, ronda2, ronda3, ronda4);
        imprimirresultados(partido, votos, ronda1, ronda2, ronda3, ronda4);
        determinarCD(partido, votos);

        cout << "\nDesea jugar otro campeonato? (S/N): ";
        cin >> opcion;


     if (opcion == 'n')
        {
            repetir=false;
        }
    }while (repetir);




}


void ingresarpartidos(string partido[])
{
    cout << "ingrese los nombres de los 5 partidos: " << endl;
    for (int i=0; i < NUM_PARTIDOS; i++) {
        cout << "PARTIDO " << (i+1) << ": ";
        cin >> partido[i];
    }

}


void genaradorresultados(int resultados[NUM_PARTIDOS][NUM_PARTIDOS], bool aleatorio)
{
    for (int i = 0; i < NUM_PARTIDOS; i++) {
        for (int j = 0; j < NUM_PARTIDOS; j++) {
            if (i != j) {
                if (aleatorio) {
                    resultados[i][j] = rand() % (NUM_VOTOS + 1);
                    resultados[j][i] = rand() % (NUM_VOTOS + 1);
                } else {
                    cout << "Ingrese VOTOS " << i+1 << ":" ;
                    cin >> resultados[i][j];

                }
            }
        }
    }
}


void calculoresultados(int resultados[NUM_PARTIDOS][NUM_PARTIDOS], string partido[], int votos[], int ronda1[], int ronda2[], int ronda3[], int ronda4[])
{
    for (int i = 0; i < NUM_PARTIDOS; i++) {
        votos[i] = ronda1[i] = ronda2[i] = ronda3[i] = ronda4[i] = 0;
        for (int j = 0; j < NUM_PARTIDOS; j++) {
            if (i != j) {
                ronda1[i]++;
                if (resultados[i][j] > resultados[j][i]) {
                    votos[i] += 3;
                    ronda2[i]++;
                } else if (resultados[i][j] == resultados[j][i]) {
                    votos[i] += 1;
                    ronda3[i]++;
                } else {
                    ronda4[i]++;
                }
            }
        }
    }

}


void imprimirresultados(string partido[], int votos[], int ronda1[], int ronda2[], int ronda3[], int ronda4[])
{
    cout << "\nTabla de posiciones:" << endl;
    cout << "Equipo\tPJ\tG\tE\tP\tPuntos" << endl;
    for (int i = 0; i < NUM_PARTIDOS; i++) {
        cout << partido[i] << "\t" << ronda1[i] << "\t" << ronda2[i] << "\t" << ronda3[i] << "\t" << ronda4[i] << "\t" << votos[i] << endl;
    }

}



void determinarCD(string partido[], int votos[])
{
    int maxVotos = -1, minVotos = 1000;
    int mayorIdx = 0, menorIdx = 0;

    for (int i = 0; i < NUM_PARTIDOS; i++) {
        if (votos[i] > maxvotos) {
            maxVotos = votos[i];
            menorIdx = i;
        }
        if (votos[i] < minVotos) {
            minVotos = votos[i];
            menorIdx = i;
        }
    }

    cout << "\nEl partido con mayor cantidad de votos: " << partido[mayorIdx] << " con " << maxVotos << " votos!" << endl;
    cout << "el equipo menor cantidad de votos es: " << partido[menorIdx] << " con " << minVotos << " votos." << endl;

}
