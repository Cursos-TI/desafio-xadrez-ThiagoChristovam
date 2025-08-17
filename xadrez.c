#include <stdio.h>

// ================== FUNÇÕES RECURSIVAS ==================

// Torre: move em linha reta (direita)
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // condição de parada
    printf("Direita %d\n", atual);
    moverTorre(casas, atual + 1); // chamada recursiva
}

// Bispo: move em diagonal (cima + direita), usando recursão
void moverBispo(int casas, int atual) {
    if (atual > casas) return;
    printf("Cima, Direita %d\n", atual);
    moverBispo(casas, atual + 1);
}

// Rainha: move em linha reta (esquerda), recursivamente
void moverRainha(int casas, int atual) {
    if (atual > casas) return;
    printf("Esquerda %d\n", atual);
    moverRainha(casas, atual + 1);
}

// ================== LOOPS COMPLEXOS ==================

// Cavalo: movimento em "L" (2 casas para cima + 1 para direita)
void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    
    for (int i = 1; i <= 2; i++) { // duas casas para cima
        printf("Cima %d\n", i);
    }

    for (int j = 1; j <= 1; j++) { // uma casa para a direita
        printf("Direita %d\n", j);
    }
}

// ================== BISPO COM LOOPS ANINHADOS ==================
void moverBispoAninhado(int casas) {
    printf("Movimento do Bispo com loops aninhados:\n");

    for (int i = 1; i <= casas; i++) { // movimento vertical
        for (int j = 1; j <= 1; j++) { // movimento horizontal
            printf("Cima %d, Direita %d\n", i, j);
        }
    }
}

// ================== MAIN ==================
int main() {
    // Torre com recursividade
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5, 1);
    printf("\n");

    // Bispo com recursividade
    printf("Movimento do Bispo (5 casas na diagonal):\n");
    moverBispo(5, 1);
    printf("\n");

    // Rainha com recursividade
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8, 1);
    printf("\n");

    // Cavalo com loops complexos
    moverCavalo();
    printf("\n");

    // Bispo com loops aninhados
    moverBispoAninhado(5);
    printf("\n");

    return 0;
}