#include <stdio.h>

int main() {
    printf("\n\n");

    // Vector de Strings (cadenas de caracteres)
    char *animals[] = {"dog", "cat", "horse"};

    // Corrección: Ajustamos la condición del bucle para imprimir los elementos del vector
    for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) {
        printf("%s\n", animals[i]);
    }

    printf("\n");

    // Vector de enteros
    int n;
    printf("Ingresa el numero de elementos: ");
    scanf("%d", &n);  

    int numbers[n];

    // Inicializamos el vector de enteros mediante un ciclo
    for (int i = 0; i < n; i++) {
        printf("Ingresa el numero: ");
        scanf("%d", &numbers[i]);
    }

    // Imprimimos los valores ingresados
    printf("Valores del vector:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: %d\n", i, numbers[i]);
    }

    return 0;
}
