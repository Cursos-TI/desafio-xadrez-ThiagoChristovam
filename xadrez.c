#include <stdio.h>

int main() {
    int i;

     printf("*** Desafio xadrez ***\n\n");

    // ================== TORRE ==================
    // Movimenta 5 casas para a direita (FOR)
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    printf("\n");

    // ================== BISPO ==================
    // Movimenta 5 casas na diagonal (cima + direita) (WHILE)
    printf("Movimento do Bispo (5 casas na diagonal cima-direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Cima, Direita %d\n", i);
        i++;
    }

    printf("\n");

    // ================== RAINHA ==================
    // Movimenta 8 casas para a esquerda (DO-WHILE)
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Esquerda %d\n", i);
        i++;
    } while (i <= 8);

    return 0;
}
