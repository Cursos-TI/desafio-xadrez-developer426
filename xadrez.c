#include <stdio.h>

int main(){
    // Casas a serem movimentadas para cada peça
    int casas_bispo = 5;
    int casas_torre = 5;
    int casas_rainha = 8;

    // Define número de casas a serem movidas em 'L' do cavalo
    int casas_cavalo_vertical = 2; // Duas casas para baixo
    int casas_cavalo_horizontal = 1; // Uma casa para a esquerda

    int i; // Variável para controle de repetição

    // Movimentação da TORRE
    printf("--- Movimento da Torre ---\n");
    for (i = 0; i < casas_torre; i++)
    {
        printf("Direita\n"); // Direção de movimento da torre
    }
        printf("\n"); // Linha em branco para uma melhor organização

    // Movimentação do BISPO
    printf("--- Movimento do Bispo ---\n");
    i = 0; // o contador para o próximo laço é reiniciado
    while (i < casas_bispo)
    {
        printf("Cima, Direita\n"); // Direção de movimento do bispo
        i++; // Incrementa o contador para evitar um looping infinito
    }
    printf("\n"); // Linha em branco para uma melhor organização

    // Movimentação da RAINHA
    printf("--- Movimento da Rainha ---\n");
    i = 0; // Reinicia o contador para o último laço
    do {
        printf("Esquerda\n"); // Direção de movimento da rainha
        i++; // Incrementa o contador para evitar looping infinito
    } while (i < casas_rainha);

    //Movimentação do CAVALO
    printf("\n"); // Linha em branco para uma melhor organização
    printf("--- Movimento do Cavalo ---\n");

    /*O loop "do-while" externo assegura que os movimentos do cavalo
    em "L" sejam tratados como um único bloco lógico, sendo executado apenas uma vez*/
    int movimento_cavalo_completo = 0;
    do {
        for (i = 0; i < casas_cavalo_vertical; i++){
            printf("Baixo\n");
        }

        i = 0; // Reinicia o contador para o próximo loop
        while (i < casas_cavalo_horizontal){
            printf("Esquerda\n");
            i++;
        }

        movimento_cavalo_completo++; // incrementa para sair do loop externo
    } while (movimento_cavalo_completo < 1);

    return 0;
}