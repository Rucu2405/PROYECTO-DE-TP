#pragma once

/** declaracion/llamados de las funciones **/

using namespace std;
string embaucadora(int puntosRondaJ1[],int puntosRondaJ2[],string vecPalo[],int ronda,string nombre1,string nombre2);
void ingresarNombres(string &j1,string &j2);
void creacionMazosRandom(string mazoEnjuego[],string vecFigura[],string vecPalo[],string vecmazoPalo[],string vecmazoFigura[],int vecPuntos[],int puntosCartas[],int tam);
void repartirCartas(string mazoEnjuego[],int puntosCartas[],string nombre1,string nombre2,int puntosRondaJ1[],int puntosRondaJ2[]);
void calcularPuntos(int puntosRondaJ1[],int puntosRondaJ2[],int puntosCartas[],int manoJ1[],int manoJ2[],string vecmazoPalo[],string nombre1,string nombre2,int ronda);
void mostrarPuntajes(int vec[],bool x,string nombre);
void definirGanador(int puntosRondaJ1[],int puntosRondaJ2[],string nombre1,string nombre2,string &nombreHistorico,int &puntajeHistorico);

