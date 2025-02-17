#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    //desafio (batalha naval)
    //dois navios posicionados em um tabuleiro de [5]x[5]
    //onde Navio contraTorpedeiro estar na: ", "Posicao-X: 0", "Posicao-Y: 5"
    //e Navio Rebocador estar na: ", "Posicao-X: 5", "Posicao-Y: 5"

    //variaveis
    int posicao;

    char * navio [3][3] = {

        {"Navio contraTorpedeiro estar na: ", "Posicao-X: 0", "Posicao-Y: 5"},
        {"Navio Rebocador estar na: ", "Posicao-X: 5", "Posicao-Y: 5"}    
         
    };
    //para verificar a posicao de cada navio, siga as instrucoes.
    printf("======BEM VINDO AO DESAFIO BATALHA NAVAL-NOVADO======\n");
    printf("           ********************             \n");
    printf("Digite o numero referente ao navio para ver a sua posicao: \n");
    printf("1->>Navio contraTorpedeiro Digite >>(0) \n");
    printf("2->>Navio Rebocador Digite >>(1) \n");
    printf("Navio: "); 

    scanf("%d", &posicao);

    printf("A posicao do %s %s, %s...\n", navio[posicao][0], navio[posicao][1], navio[posicao][2]);

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
