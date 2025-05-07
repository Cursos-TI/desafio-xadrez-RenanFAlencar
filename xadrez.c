#include <stdio.h>


// Desafio nível novato
int main() {
    // Número de casas a serem movimentadas
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    int i;

    // Movimento da Torre: para a direita (for)
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: diagonal para cima e à direita (while)
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha: para a esquerda (do-while)
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0;
}