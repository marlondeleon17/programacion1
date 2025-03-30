#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define NUM_EQUIPOS 6
#define NUM_GOLES 10

void ingresaCiclo();
void ingresarequipos(string equipos[]);
void generadorresultados(int resultados[NUM_EQUIPOS][NUM_EQUIPOS], bool aleatorio);
void calculoresultados(int resultados[NUM_EQUIPOS][NUM_EQUIPOS], string equipos[], int puntos[], int partidos[], int ganados[], int empatados[], int perdidos[]);
void imprimirresultados(string equipos[], int puntos[], int partidos[], int ganados[], int empatados[], int perdidos[]);
void determinarCD(string equipos[], int puntos[]);

#endif
