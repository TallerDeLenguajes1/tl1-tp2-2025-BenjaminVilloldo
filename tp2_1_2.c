#include <stdio.h>
#include <stdlib.h>  // Para rand()
#include <time.h>    // Para srand()

#define N 20

int main() {
    double vt[N];
    double *ptr = vt;  // Puntero que apunta al inicio del array

    // Inicializar la semilla del generador de números aleatorios
    srand(time(NULL));

    // Usando aritmética de punteros para recorrer el array
    for (int i = 0; i < N; i++) {
        *(ptr + i) = 1 + rand() % 100;  // Asignar valor usando puntero
        printf("%f ", *(ptr + i));      // Imprimir valor usando puntero
    }

    printf("\n");
    return 0;
}
