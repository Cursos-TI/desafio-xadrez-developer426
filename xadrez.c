#include <stdio.h>

// === Declarações das funções recursivas ===
/* A declaração avisa ao compilador sobre a
existencia das funções antes de sua utilização*/

/*Desloca a Torre para a direita de forma recursiva.
O parâmetro indica quantas casas ainda devem ser movidas*/
void moverTorreRecursivo(int casas);

/*Desloca o Bispo recursivamente na diagonal superior direita.
O parâmetro indica a quantidade de casas ainda a percorrer*/
void moverBispoRecursivo(int casas);

/*Desloca a Rainha para a esquerda de forma recursiva.
O parâmetro indica quantas casas ainda devem ser movimentadas*/
void moverRainhaRecursivo(int casas);

int main(){

    int casas_torre = 4;
    int casas_vispo = 5;
    int casas_rainha = 6;

    int casas_cavalo_vertical = 2;
    int casas_cavalo_horizontal = 1;

    printf("--- Movimentação da Torre ---\n");
    moverTorreRecursivo(casas_torre);
    printf("\n");
}