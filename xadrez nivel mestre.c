#include <stdio.h>

    void MoverTorre(int casas){
        if(casas > 0){
            MoverTorre(casas - 1);
            printf("A torre foi para a direita %d vezes! \n", casas);
        }
        
    
    }

        void MoverBispo(int casas){
        if(casas > 0){
            MoverBispo(casas - 1);
            printf("O bispo se moveu para cima! \n");
            printf("O bispo se moveu para a direita! \n");
        }
        
    
    }

        void MoverRainha(int casas){
        if(casas > 0){
            MoverRainha(casas - 1);
            printf("A rainha se moveu para a esquerda! %d vez(es)! \n", casas);
        }
        
    
    }

      int main(){
        int rainha = 1, movimentocavalo = 3;

    MoverTorre(3);
    MoverBispo(2);
    MoverRainha(8);

    while(movimentocavalo--){
        for(int cavalo = 0; cavalo < 2; cavalo++){
        printf("O cavalo se moveu para cima! \n");
    }
    printf("O cavalo se moveu para a direita! \n");
    }

    




    



    return 0;

}
    