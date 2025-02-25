#include <stdio.h>
    // Batalha Naval
    // criar tabuleiro tamanho 10x10
    // onde (0) representa água e (1) representa partes do navio 1 (2)representa partes do navio 2
    // um navio1 na horizontal e navio2 na vertical    
    // void mostraTabuleiro() 
    // void iniciaNaviosHorizontal() 
    // void iniciaNaviosVertical()
#define casas 10

void iniciaNaviosHorizontal(int tabuleiro[casas][casas], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x][y + i] = 1; // Navio (1)
    }
}
void iniciaNaviosVertical(int tabuleiro[casas][casas], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x + i][y] = 2; // Navio (2)
    }
}
void mostraTabuleiro(int tabuleiro[casas][casas]) {
    printf("*** BATALHA NAVAL - Novato ***\n");
    printf("\n");
    printf("  A B C D E F G H I J\n"); // Imprime letras das colunas
    for (int i = 0; i < casas; i++) {
        printf("%d ", i + 1); // Imprime números das linhas
        for (int j = 0; j < casas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");        
    }
}
int main() {
    int tabuleiro[casas][casas] = {0};
    // Posicionar navio 1 (horizontal)tamanho 3 na posição (2,3)
    iniciaNaviosHorizontal(tabuleiro, 2, 3, 3);
    // Posicionar navio 2 (vertical)tamanho 3 na posição (5,6)
    iniciaNaviosVertical(tabuleiro, 5, 6, 3);
    // Mostrar o tabuleiro com os navios posicionados
    mostraTabuleiro(tabuleiro);

    return 0;
}
