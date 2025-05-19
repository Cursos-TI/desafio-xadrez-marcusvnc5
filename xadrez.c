#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int i = 1;

    printf("***Desafio de Xadrez - MateCheck!***\n");

    // Implementação de Movimentação da Torre
    //Mover a Torre 5 casas para a direita:
    printf("Torre se movendo 5 casas para a direita!\n");

    do {
        printf("Direita\n");
        i++;
    } while (i <= 5);

    // Implementação de Movimentação do Bispo
    //Mover o Bispo 5 casas na diagonal:
    printf("Bispo se movendo 5 casas para cima e à direita!\n");

    for (i = 1; i <= 5; i++) {
        printf("Cima\n"); //imprime a direção do movimento
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    //Mover a rainha 8 casas para a esquerda:
    printf("Rainha se movendo 8 casas para a esquerda!\n");

    i = 1;

    while (i <= 8) {
        printf("Esquerda\n");
        i++;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
