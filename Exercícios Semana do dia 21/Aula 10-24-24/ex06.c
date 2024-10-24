/*
    Escreva um programa que gere uma matriz de inteiros de 4 linhas
    por 4 colunas e crie sua transposta (matriz transposta é toda a matriz onde são
    trocadas as linhas pelas colunas ou vice-versa)
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int matriz[4][4], transposta[4][4];

    // Seed
    srand(time(NULL));

    printf("Matriz regular:\n\n");
    // Popular a matriz
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            // Numeros reais de 0 a 20 com uma casa decimal de precisão
            matriz[i][j] = rand() % 21;

            /*
                Imprimir a matriz. Eu elaborei mais sobre esse uso de printf() no exercício 04 da pasta "aula-10-21-24"
            */
            printf("%-5.02i", matriz[i][j]);
        }

        printf("\n");
    }

    printf("\n\n");

    printf("Matriz transposta:\n\n");
    // Criar e imprimir a matriz transposta
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            transposta[i][j] = matriz[j][i];

            printf("%-5.02i", transposta[i][j]);            
        }

        printf("\n");
    }
    
}