/*
    Defina uma matriz com 3 linhas e 4 colunas. Crie um vetor com 3
    posições que contenha a soma dos valores de cada uma das linhas da matriz.
    Crie um vetor com 4 posições que contenha a multiplicação dos valores de
    cada uma das colunas da matriz. Ao final do processamento, imprima esses
    vetores.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int matriz[3][4], linhasSoma[3], colunasMult[4], soma, mult;
    // Seed
    srand(time(NULL));

    // População da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            // Numeros inteiros de 0 a 100
            matriz[i][j] = rand() % 101;

            // Imprimir elemetos da matriz
            printf("%-5.02i", matriz[i][j]);
        }

        printf("\n");
    }
    
    // Soma dos valores de cada uma das linhas da matriz
    for(int i = 0; i < 3; i++) {
        // Ao passar pra próxima linha, zerar a soma.
        soma = 0;
        
        for (int j = 0; j < 4; j++)
            soma += matriz[i][j];

        // Guardar a soma da linha no vetor
        linhasSoma[i] = soma;
    }

    // Multiplicação dos valores de cada uma das colunas da matriz
    // Neste loop, "i" representa as colunas da matriz e "j", as linhas.
    for (int  i = 0; i < 4; i++) {
        // Ao passar para a próxima coluna, zerar a multiplicação.
        // O valor é "1" ao invés de "0" porque "1" é o elemento neutro da multiplicação
        // (Todo número multiplicado por 1 é ele mesmo, enquanto
        // se multiplicado por zero, o resultado será zero).
        mult = 1;
        
        for(int j = 0; j < 3; j++)
            mult *= matriz[j][i];

        // Guardar a multiplicação da coluna no vetor
        colunasMult[i] = mult;
    }

    // Imprimir resultados. Eu elaborei mais sobre esses usos de printf() no exercício 04 da pasta "aula-10-21-24"
    printf("Soma das linhas:\n");
    for(int i = 0; i < 3; i++)
        printf("%-5.03i", linhasSoma[i]);

    printf("\n\nMultiplicacao das colunas:\n");
    for(int i = 0; i < 4; i++)
        printf("%-8.06i", colunasMult[i]);

    return 0;
}