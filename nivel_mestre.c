#include <stdio.h>

/* ===============================
   BISPO - 5 casas na diagonal
   =============================== */
void moverBispo(int linha, int coluna, int passos) {
    if (passos == 0) return;

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            linha--;
            coluna++;
            printf("Bispo -> linha %d, coluna %d\n", linha, coluna);
        }
    }
    moverBispo(linha, coluna, passos - 1);
}

/* ===============================
   TORRE - 5 casas para direita
   =============================== */
void moverTorre(int linha, int coluna, int passos) {
    if (passos == 0) return;

    coluna++;
    printf("Torre -> linha %d, coluna %d\n", linha, coluna);

    moverTorre(linha, coluna, passos - 1);
}

/* ===============================
   RAINHA - 8 casas esquerda
   =============================== */
void moverRainha(int linha, int coluna, int passos) {
    if (passos == 0) return;

    coluna--;
    printf("Rainha -> linha %d, coluna %d\n", linha, coluna);

    moverRainha(linha, coluna, passos - 1);
}

/* ===============================
   CAVALO - Movimento em L
   =============================== */
void moverCavalo(int linha, int coluna) {
    for (int i = 0; i < 2; i++) {
        linha--;
    }
    for (int j = 0; j < 1; j++) {
        coluna++;
    }
    printf("Cavalo -> linha %d, coluna %d\n", linha, coluna);
}

int main() {
    int linha = 8;
    int coluna = 1;

    printf("=== DESAFIO NIVEL MESTRE ===\n\n");

    moverBispo(linha, coluna, 5);
    printf("\n");

    moverTorre(linha, coluna, 5);
    printf("\n");

    moverRainha(linha, coluna, 8);
    printf("\n");

    moverCavalo(linha, coluna);

    return 0;
}