#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Ortega(int tamano) {
    int vector[100];

    srand(time(NULL));

    for (int i = 0; i < tamano; i++) {
        vector[i] = rand() % 100;
    }

    printf("Vector Ortega con números aleatorios:\n");
    for (int i = 0; i < tamano; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

int main() {
    int tamano;
    
    printf("Ingrese el tamaño del vector (máximo 100): ");
    scanf("%d", &tamano);

    if (tamano <= 0 || tamano > 100) {
        printf("Error: el tamaño debe estar entre 1 y 100.\n");
        return 1;
    }

    Ortega(tamano);

    return 0;
}

