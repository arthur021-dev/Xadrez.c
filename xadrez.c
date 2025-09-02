#include <stdio.h>

int main(){

    int bispo = 1, rainha = 1;

    for (int torre = 1; torre <= 5; torre++)
    {
        printf("A torre foi para a direita! \n");
    }


    while(bispo <= 4){
    printf("O bispo se moveu para cima! \n");
    printf("O bispo se moveu para a direita! \n");
    bispo++;
    bispo++;
    }

    do{
        printf("A rainha se moveu para a esquerda! \n");
        rainha++;
    } while (rainha <= 8);



    



    return 0;

}