#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamano;
    int Ortega[100];

    printf("Ingrese el tamaño del vector (máximo 100): ");
    scanf("%d", &tamano);

    if (tamano <= 0 || tamano > 100) {
        printf("Error: el tamaño debe estar entre 1 y 100.\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < tamano; i++) {
        Ortega[i] = rand() % 100;
    }

    printf("Vector Ortega con números aleatorios:\n");
    for (int i = 0; i < tamano; i++) {
        printf("%d ", Ortega[i]);
    }
    printf("\n");

    return 0;
}
