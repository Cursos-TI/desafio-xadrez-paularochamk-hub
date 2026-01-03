#include<stdio.h>

int main(){

    //Constante de Movimentação
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    int i;

    // ===================BISPO==================//
    //Bispo: diagonal superior direita
    printf("Movimentacao do Bispo (intermediario):\n");
    for (i = 1; i <= MOV_BISPO; i++) {
    printf("Cima\n");
    printf("Direita\n");

    }

    // ====================TORRE==================//
    //Torre: direita a esquerda
    printf("Movimentacao da torre (intermediario):\n");
    for (i = 1; i <= MOV_TORRE; i++) {
        printf("Direita\n");
    }
    for (i = 1; i <= MOV_TORRE; i++) {
    }

printf("\n");

   //======================RAINHA==================//
   //Rainha: cima , baixo, esquerda e direita

   printf("Movimentacao da Rainha(intermediario):\n");
   for (i = 1; i <= MOV_RAINHA; i++) {
     printf("Cima\n");
   }
    for(i = 1; i <= MOV_RAINHA; i++) {
        printf("Baixo:\n");
    }
    for(i = 1; i <=MOV_RAINHA; i++) {
        printf("Esquerda:\n");
    }
   for(i - 1; i <= MOV_RAINHA; i++){
    printf("Direita:\n");
   }

   return 0;

}


        
    
    

    
