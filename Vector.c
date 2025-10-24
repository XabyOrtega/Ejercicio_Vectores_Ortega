#include <stdio.h>

int main() {
    int tamano;
    char apellido[100] = "Ortega";

    printf("Ingrese el tamaño del vector (máximo 100): ");
    scanf("%d", &tamano);

    if (tamano <= 0 || tamano > 100) {
        printf("Error: el tamaño debe estar entre 1 y 100.\n");
        return 1;
    }

    printf("\nEl apellido almacenado en el vector es: %s\n", apellido);
    printf("El tamaño ingresado del vector fue: %d\n", tamano);

    return 0;
}
