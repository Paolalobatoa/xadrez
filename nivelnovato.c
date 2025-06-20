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


int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    moverTorre(casasTorre);
    moverBispo(casasBispo);
    moverRainha(casasRainha);

    return 0;
}
