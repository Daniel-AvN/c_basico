#include <stdio.h>

int main(){
    printf("\n\n");

    // constantes
    const float pi=3.14159;
    printf("pi: %.2f\n",pi); //truncar a 2 decimales

    // string: 
    char string[]="hello world";
    printf("%s\n",string);

    // numers:
    int n1=3;
    printf("%d\n",n1);

    long n2=123456789;
    printf("%d\n",n2);

    float n3=2.16;
    printf("%f\n",n3);

    double n4=3.141592653589793;
    printf("%f\n",n4);

    // char:
    char word='A';
    printf("%c\n",word);

    // boolean no existen, 0 es false, 1 es true:
    
    printf("\n\n");
    return 0;
}
