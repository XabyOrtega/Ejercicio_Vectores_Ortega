#include <stdio.h>

int main() {
    int tamano;
    int Ortega[100] ;

    printf("Ingrese el tamaño del vector (máximo 100): ");
    scanf("%d", &tamano);

    if (tamano <= 0 || tamano > 100) {
        printf("Error: el tamaño debe estar entre 1 y 100.\n");
        return 1;
    }

    printf("El tamaño ingresado del vector Ortega fue: %d\n", tamano);

    return 0;
}
