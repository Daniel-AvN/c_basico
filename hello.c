#include <stdio.h>

int main(){
    int n;
    char name[100];

    printf("\n\nIngrese un numero entero: ");
    scanf("%d", &n);
    printf("se ingreso un %d\n",n);

    printf("\n\nIngrese su nombre: ");

    // Ajustamos la longitud de la cadena para que no se salga de la memoria
    scanf("%99s", name);
    printf("se ingreso el nombre %s\n", name);

    return 0;
}
