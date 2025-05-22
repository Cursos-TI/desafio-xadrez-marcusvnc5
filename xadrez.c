#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }

}

void moverBispo(int i, int j){
    for (int i = 0; i < 5; i++) {
       printf("Cima\n", i);
       for (int j = 0; j < 1; j++){
            printf("Direita\n", j);
       }
    }
}

void moverRainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }

}

void moverCavalo(int i, int j){
    for (int i = 0; i < 5; i++) {
        if (i == 2)
            break;

        printf("Cima\n");
    }

    for (int j = 0; j < 1; j++) {
        if (j == 1)
            break;

        printf("Direita\n");
    }

}

int main(){

    printf("***Desafio de Xadrez - MateCheck!***\n");
    
    //Mover a torre 5 casas para a direita:
    printf("Torre se movendo 5 casas para a direita!\n");

    moverTorre(5);
    printf("--------------\n");
   
    //Mover o bispo 5 casas na diagonal:
    printf("Bispo se movendo 5 casas para cima e à direita!\n");
    
    moverBispo(0, 0);
    printf("--------------\n");

    //Mover a rainha 8 casas para a esquerda:
    printf("Rainha se movendo 8 casas para a esquerda!\n");

    moverRainha(8);
    printf("--------------\n");

    //Mover o cavalo em L, duas casas para cima e uma à direita:
    printf("Cavalo se movendo em L, duas casas para cima e uma à direita!\n");
    moverCavalo(0, 0);
    printf("--------------\n");

    return 0;
}
