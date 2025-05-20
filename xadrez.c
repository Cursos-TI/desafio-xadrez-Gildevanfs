#include <stdio.h>


void movimentoCavalo(int direcaoVertical, int direcaoHorizontal) {

    for (int i = 0; i < 2; i++) {
        if (direcaoVertical == 1)
            printf("Cima\n");
        else if (direcaoVertical == -1)
            printf("Baixo\n");
    }


    int j = 0;
    while (j < 1) {
        if (direcaoHorizontal == 1)
            printf("Direita\n");
        else if (direcaoHorizontal == -1)
            printf("Esquerda\n");
        j++;
    }


    printf("\n");
}

int main() {
    movimentoCavalo(1, 1);
    movimentoCavalo(1, -1);
    movimentoCavalo(-1, 1);
    movimentoCavalo(-1, -1);

    for (int i = 0; i < 2; i++) {
        printf("Esquerda\n");
    }
    int j = 0;
    while (j < 1) {
        printf("Cima\n");
        j++;
    }
    printf("\n");


    for (int i = 0; i < 2; i++) {
        printf("Esquerda\n");
    }
    j = 0;
    while (j < 1) {
        printf("Baixo\n");
        j++;
    }
    printf("\n");


    for (int i = 0; i < 2; i++) {
        printf("Direita\n");
    }
    j = 0;
    while (j < 1) {
        printf("Cima\n");
        j++;
    }
    printf("\n");


    for (int i = 0; i < 2; i++) {
        printf("Direita\n");
    }
    j = 0;
    while (j < 1) {
        printf("Baixo\n");
        j++;
    }
    printf("\n");

    return 0;
}