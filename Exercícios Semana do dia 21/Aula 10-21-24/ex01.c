/*
    Crie uma matriz de 11 linhas e 11 colunas que contenha a tabuada dos números de 0 a 10.
*/

#include <stdio.h>

int main() {
    int tabuada[11][11];

    for(int i = 0; i < 11; i++) {
        for(int j = 0; j < 11; j++) {
            tabuada[i][j] = i * j;
            printf("%i * %i = %i\n", i, j, tabuada[i][j]);
        }
        printf("\n");
    }

    return 0;
}