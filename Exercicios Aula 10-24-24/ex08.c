/*
    Escreva um programa que deverá permitir que o usuário entre
    com os valores dos elementos de uma matriz quadrada de ordem 4 (4 linhas e
    4 colunas) e possibilite ao usuário realizar as seguintes funcionalidades:
        a. Imprimir todos os elementos da matriz;
        b. Somar os quadrados de todos os elementos da primeira coluna;
        c. Somar todos os elementos da terceira linha;
        d. Somar os elementos da diagonal principal; e
        e. Somar todos os elementos de índice par da segunda linha
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int matriz[4][4], soma;

    // Seed
    srand(time(NULL));

    // População da matriz
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            // Numeros inteiros entre 0 e 100
            matriz[i][j] = rand() % 101;

            // Imprimir todos os elementos da matriz
            printf("%-5.03i", matriz[i][j]);
        }

        printf("\n");
    }

    // Somar o quadrado de todos os elementos da primeira coluna
    soma = 0;
    
    for(int i = 0; i < 4; i++) {
        int elemento = matriz[i][0];
        soma += elemento * elemento;
    }

    printf("A soma dos quadrados de todos os elementos da primeira coluna da matriz eh de %i\n", soma);

    // Somar todos os elementos da terceira linha
    soma = 0;

    for(int i = 0; i < 4; i++)
        // A terceira linha tem índice 2! (Contamos a partir de 0)
        soma += matriz[2][i];

    // Nota: Na linguagem C, as chaves ("{" e "}") não são obrigatórias em loops "for" que têm apenas uma linha.
    // O mesmo acontece em estruturas "if" (Linhas com comentário não contam)!    

    printf("A soma de todos os elementos da terceira linha da matriz eh de %i\n", soma);

    // Somar todos os elementos da diagonal principal
    soma = 0;

    for(int i = 0; i < 4; i++)
        // A coluna do elemento pertencente à diagonal principal é sempre a com o mesmo índice da linha
        // Ou seja, na linha de índice 2, o elemento da coluna 2 é o que pertence à diagonal principal
        soma += matriz[i][i];
    
    printf("A soma de todos os elementos da diagonal principal eh de %i\n", soma);

    // Somar todos os elementos de índice par da segunda linha
    soma = 0;

    for (int i = 0; i < 4; i++)
        // Segunda linha, índice 1
        if(i % 2 == 0) soma += matriz[1][i];

    printf("A soma dos elementos de indice par da segunda linha eh de %i\n", soma);

    return 0;
}