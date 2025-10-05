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

int main() {
    // Casas a serem movimentadas para cada peça
    // Estes valores controlam as chamadas recursivas e os loops
    int casas_torre = 4;
    int casas_bispo = 5;
    int casas_rainha = 6;

    // Define o número de casas a serem movidas em "L" do cavalo
    int casas_cavalo_vertical = 2; // Duas casas para cima
    int casas_cavalo_horizontal = 1; // Uma casa para baixo

    // Implementação da Recursividade na movimentação da torre
    printf("--- Movimentação da Torre (Recursivo) ---\n");
    moverTorreRecursivo(casas_torre);
    printf("\n"); // Linha em branco para uma melhor organização

    // Implementação da Recursividade na movimentação do Bispo
    printf("--- Movimentação do Bispo (Recursivo) ---\n");
    moverBispoRecursivo(casas_bispo);
    printf("\n"); // Linha em branco para uma melhor organização

    // Implementação dos Loops Aninhados na movimentação do Bispo
    printf("--- Movimentação do Bispo (com Loops Aninhados) ---\n");
    // O loop externo indica o movimento das casas na direção vertical
    for (int v = 0; v < casas_bispo; v++) {
        // O loop interno representa o avanço na direção horizontal;
        /*A condição 'h == v* assegura que a cada movimento vertical
        seja impresso exatamente um movimento horizontal correspondendo
        simulando a diagonal*/
        for (int h = 0; h < casas_bispo; h++) {
            if (h == v) {
                printf("Cima, Direita\n");
            }
        }
    }
    printf("\n");

    // Implementação da recursividade na movimentação da Rainha
    printf("--- Movimentação da Rainha (Recursivo) ---\n");
    moverRainhaRecursivo(casas_rainha);
    printf("\n");

    // Implementação de Loops Complexos na movimentação do Cavalo
    printf("--- Movimentação do Cavalo (Loops Complexos) ---\n");
    
    //Este loop faz a simulação do movimento completo em "L" do Cavalo
    //A soma dos movimentos verticais e horizontais é o total de passos
    int total_passos_cavalo = casas_cavalo_vertical + casas_cavalo_horizontal;

    for (int passo_atual = 1; passo_atual <= total_passos_cavalo; passo_atual++) {
        
        // Verifica se o passo atual ainda faz parte do movimento vertical
        if (passo_atual <= casas_cavalo_vertical) {
            printf("Cima\n");
            // "Continue" pula para a próxima iteração do loop, ignorando o código logo abaixo
            // É útil aqui para garantir que apenas seja impresso o movimento vertical
            continue;
        }

        // Após os movimentos verticais terem sidos concluídos, este trecho é executado
        printf("Direita\n");

        /* Como o cavalo executa apenas um movimento em "L"
        de cada vez, o loop pode ser encerrado após a conclusão
        desse passo*/
        // "Break" encerra o loop imediatamente
        break;
    }

    return 0;
}

// === Implementação das funções Recursivas ===

/* A função que desloca a Torre para a direita de forma recursiva.
A função é chamada repetidamente até que
todas as casas sejam percorridas. */
void moverTorreRecursivo(int casas) {
    // Condição de término (caso base): quanto não houver mais casas a mover, a função é encerrada.
    if (casas <= 0) {
        return;
    }

    printf("Direita\n"); // Imprime o movimento da casa atual

    moverTorreRecursivo(casas - 1); // Chamada recursiva: chama a si mesma com uma casa a menos
}

/* Função que desloca o Bispo recursivamente na diagonal (para cima e para a direita).
A lógica é similar à da torre, porém com direção distinta. */
void moverBispoRecursivo(int casas) {
    // Caso base: previne a recursão infinita
    if (casas <= 0) {
        return;
    }

    printf("Cima, Direita\n"); // Imprime o movimento diagonal

    // Chamada recursiva: decrementa o contador de casas e chama a função novamente
    moverBispoRecursivo(casas - 1);
}

/* Função que desloca a Rainha para a esquerda de forma recursiva.
Mantém o mesmo padrão das demais funções recursivas. */
void moverRainhaRecursivo(int casas) {
    // Caso base: a condição que termina a recursão
    if (casas <= 0) {
        return;
    }
    
    printf("Esquerda\n"); // Imprime o movimento para a esquerda

    moverRainhaRecursivo(casas - 1); // Chamada recursiva: move para a próxima casa.
}