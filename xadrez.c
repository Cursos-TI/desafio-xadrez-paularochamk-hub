#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   //Declaração de constantes para o numero de casas
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;
     
    //Variavel de controle dos laços
    int i;

    //====================BISPO===================//
    //Movimento do bipo: diagonal superior direito (Cima + Direita)
    printf("Movimentacao do Bispo:\n");
    for (i = 1; i <= MOV_BISPO; I++) {
        printf("cima\n");
        printf("direita\n");

    }

printf("\n");

//======================TORRE========================//
//Movimento da torre: apenas para a direita
printf("Movimentacao da torre:\n");
for (i = 1; i <= MOV_TORRE; i++) {
 printf("Direita\n");

}

printf("\n");


//====================RAINHA==========================//
//Movimento da rainha: apenas para a esquerda 
printf("Movimentacao da rainha:\n");
for (i = 1; i<= MOV_RAINHA; i++) {
  printf("Esquerda\n")

}

//Finaliza o programa
return 0;

}

