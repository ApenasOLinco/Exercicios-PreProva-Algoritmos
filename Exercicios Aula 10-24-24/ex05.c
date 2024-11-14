/*
    Escreva um programa que construa uma matriz de 5 linhas por 5
    colunas de números reais e coloque o conteúdo de sua diagonal principal
    dentro de um vetor e o imprima
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    float matriz [5][5], diagonalPrincipal[5];

    // Seed
    srand(time(NULL));

    // Popular a matriz
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            // Numeros reais de 0 a 10 com uma casa decimal de precisão
            matriz[i][j] = (float)(rand() % 101) / 10;

            /*
                Imprimir a matriz. Eu elaborei mais sobre esse uso de printf() no exercício 04 da pasta "aula-10-21-24"
            */
            printf("%-6.1f", matriz[i][j]);
        }

        printf("\n");
    }

    printf("\n\n");

    // Percorrer a diagonal principal da matriz, adicionando seus elementos ao vetor "diagonalPrincipal"
    for(int i = 0; i < 5; i++) {
        diagonalPrincipal[i] = matriz[i][i];

        printf("%-6.1f", diagonalPrincipal[i]);
    }

    return 0;
}