/*
    Escreva um algoritmo que construa uma matriz de 10 linhas e 15
    colunas contendo números inteiros. Em seguida escreva a soma dos
    elementos de cada linha e se a soma dos elementos é par ou ímpar. Por fim,
    escreva a soma dos elementos de cada coluna e se a soma dos elementos é
    par ou ímpar
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int matriz[10][15], soma;
    // Seed para o gerador de numeros pode ser a data e hora atual do computador
    srand(time(NULL));

    // Popular a matriz
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 15; j++) {
            // Numeros inteiros de 0 a 10
            matriz[i][j] = rand() % 11;
            
            /*
                Imprimir a matriz. Eu elaborei mais sobre esse uso de printf() no exercício 04 da pasta "aula-10-21-24"
            */
            printf("%-5.03i", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    // Fazer a soma dos elementos de cada linha, Verificar se a soma é par
    for(int i = 0; i < 10; i++) {
        /*
        Necessário definir soma como 0 para que o processo não seja 
        afetado por lixo de memória ou por somas de linhas anteriores
        */
        soma = 0;
        
        for(int j = 0; j < 15; j++) {
            soma += matriz[i][j];
        }

        // Ao terminar de percorrer a linha, imprimir a soma
        printf("Linha %i, Soma: %i\n", i, soma);
        // Verificar se é par
        if(soma % 2 == 0) printf("A soma eh par.\n\n");
        else printf("A soma eh impar\n\n");
    }

    // Fazer a soma dos elementos de cada coluna, Verificar se a soma é par
    for(int i = 0; i < 15; i ++) { // "i" representa as colunas
        soma = 0;

        for(int j = 0; j < 10; j++) { // "j" representa as linhas
            soma += matriz[j][i];
        }

        // Ao terminar de percorrer a coluna, imprimir a soma
        printf("Coluna %i, Soma: %i\n", i, soma);
        // Verificar se é par
        if(soma % 2 == 0) printf("A soma eh par.\n\n");
        else printf("A soma eh impar\n\n");
    }

    return 0;
}