#include <stdio.h>

int main(){
    printf("\n\n");

    // boolean no existen, 0 es false, 1 es true:
    int n1,n2;
    n1=5;
    n2=4;

    printf("%d \n",n1>n2); //1
    printf("%d \n",n1<n2); //0
    printf("%d \n",n1>=n2); //1
    printf("%d \n",n1<=n2); //0
    printf("%d \n",n1==n2); //0
    printf("%d \n",n1!=n2); //1

    printf("\n\n");

    int cal;
    printf("Ingrese una calificacion: ");
    scanf("%d",&cal);

    if (cal>8 && cal<= 10){
        printf("Eres bueno \n");
    }else{
        printf("Eres un pendejo, por eso los vengadores te rechazaron! \n");
    }
    
    printf("\n\n");

    char note;
    
    switch (cal) {
        case 10:
            note='A';
            break;
        case 9:
            note='B';
            break;
        case 8:
            note='C';
            break;
        case 7:
            note='D';
            break;
        case 6:
            note='E';
            break;
        default:
            note='F';
            break;
    }
    
    printf("Tu calificacion segun los gringos es %c \n", note);
    
    printf("\n\n");
    return 0;
}
