#include <stdio.h>

// -------- Recursão para Torre --------
// Simula movimento da Torre para a direita
void moverTorreRec(int casasRestantes) {
    if (casasRestantes == 0) return;  // Caso base: nenhuma casa restante

    printf("Direita\n");
    moverTorreRec(casasRestantes - 1);  // Chamada recursiva para próxima casa
}

// -------- Recursão para Bispo com loops aninhados --------
// Simula movimento diagonal: 5 casas para cima e direita
// Usa loop externo para vertical (cima), interno para horizontal (direita)
void moverBispoRecLoops(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0 || casasHorizontais == 0) return;

    // Loop vertical
    for (int v = 0; v < casasVerticais; v++) {
        for (int h = 0; h < casasHorizontais; h++) {
            printf("Cima Direita\n");
        }
        moverBispoRecLoops(casasVerticais - 1, casasHorizontais - 1);
        break;
    }
}


void moverRainhaRec(int casasRestantes) {
    if (casasRestantes == 0) return;  

    printf("Esquerda\n");
    moverRainhaRec(casasRestantes - 1);  
}


void moverCavaloLoopsComplexos() {
    printf("Movimento do Cavalo:\n");
    int movimentosL = 1;
    int countL = 0;

    for (int l = 0; l < movimentosL; l++) {
        int countUp = 0;
        int countRight = 0;

        while (1) {
            if (countUp < 2) {
                printf("Cima\n");
                countUp++;
                continue;
            }

            if (countRight < 1) {
                printf("Direita\n");
                countRight++;
                break;
            }
        }
        countL++;
    }
    printf("\n");
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorreRec(casasTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");

    moverBispoRecLoops(casasBispo, casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainhaRec(casasRainha);
    printf("\n");

    moverCavaloLoopsComplexos();

    return 0;
}
