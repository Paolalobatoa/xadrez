#include <stdio.h>

void moverTorre(int casas) {
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas; i++) {
        printf("Direita\n");
    }
    printf("\n");
}

void moverBispo(int casas) {
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < casas) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");
}

void moverRainha(int casas) {
    printf("Movimento da Rainha:\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casas);
    printf("\n");
}

void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < 1; i++) {
        int j = 0;
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");
    }

    printf("\n");
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    moverTorre(casasTorre);
    moverBispo(casasBispo);
    moverRainha(casasRainha);
    moverCavalo();

    return 0;
}
