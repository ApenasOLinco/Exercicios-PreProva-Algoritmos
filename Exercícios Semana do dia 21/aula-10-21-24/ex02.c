/*
    Defina uma matriz com 3 linhas e 5 colunas e imprima o somatório dos elementos de sua última
    coluna.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int matriz[3][5], soma = 0;
    srand(time(NULL));

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 100 + 1;
            printf("%i  ", matriz[i][j]);
        }
        
        soma += matriz[i][4];
        printf("\n");
    }

    printf("\n\nSoma da ultima coluna: %i", soma);

    return 0;
}