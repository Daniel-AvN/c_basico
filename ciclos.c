#include <stdio.h>

int main(){
    printf("\n\n");

    //for

    // primero 20 numeros impares
    for (int i = 1; i < 20; i+=2){
        printf("%d \n", i);
    }


    printf("Ayuda a tu amigo con sus problemas amorosos: \n");
    int me_ama=0; // boolean
    while (me_ama==0){ 
        printf("le envio cartas (0=Si,1=no)? ");
        scanf("%d",&me_ama);
        if (me_ama==0){
            printf("No me contesta :( \n");
        }else{
            printf("Mejor ya no incisto, gracias bro :(\n");
        }

    }
    
    printf("\n\n");

    // do while
    printf("tu rommie quiere convenserte de ir a la lata \n");
    int ida=0; // no quieres 
    do
    {
        printf("Bro vamos a la lata (0=No,1=si)?: ");
        scanf("%d",&ida);

    } while (!ida);
    printf(" vamos! ");
    
    
    
    printf("\n\n");
    return 0;
}
