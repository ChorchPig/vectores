#include <stdio.h>
#include <locale.h>
#include "funciones.h"
int main(){
    setlocale(LC_ALL, "spanish");
    int filas, columnas;
    printf("�Cu�ntos conjuntos quer�s?\n");
    scanf("%i", &filas);
    printf("�Cu�ntos n�meros tienen?\n");
    scanf("%i", &columnas);
    float vector[filas][columnas];
    aMatriz(filas, columnas, vector);
    imprimirMatriz(filas, columnas, vector);
    return 0;
}
