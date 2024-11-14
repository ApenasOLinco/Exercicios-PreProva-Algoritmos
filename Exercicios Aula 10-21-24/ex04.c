/*
    Defina uma matriz com 3 linhas e 4 colunas. Crie um vetor com 3 posições que contenha a soma
    dos valores de cada uma das linhas da matriz. Crie um vetor com 4 posições que contenha a
    multiplicação dos valores de cada uma das colunas da matriz. Ao final do processamento, imprima
    esses vetores.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[3][4], soma[3], multiplicacao[4];

    // Seed
    srand(time(NULL));

    printf("Matriz gerada:\n");

    // Preencher a matriz com valores aleatorios e imprimí-la
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            // Valores de 1 a 10 (inclusivo)
            matriz[i][j] = rand() % 10 + 1;

            /*
            Imprimir valor inserido na matriz.
            
            Explicação da formatação:

            "-5": indica que cada número deve ocupar um máximo de 5 espaços, 
                  ou seja, deve haver de 1 a 5 espaços entre os elementos impressos;

            ".": separa um argumento do outro;

            "02": "0" é o início a ser adicionado a cada número impresso, e "2" é o
                  número de casas que os "0" devem ser adicionados para completar.
                  Ou seja, se o input for "7" ou "4", o output será "07" ou "04", mas,
                  se for "10" ou "100", o output será apenas "10" ou "100".
            
            "d":  Para números inteiros
            */
            printf("%-5.02d", matriz[i][j]);
        }
        
        printf("\n");
    }

    printf("\n");

    // Soma das linhas

    /*
    Exemplo
    Consideremos a Matriz:
    [
        0: [1,   2,   3,    4],
        1: [5,   3,   2,    4],
        2: [2,   2,   2,    2]
    ]

    Para somar a primeira linha (índice 0), só precisamos dos elementos:
    [1, 2, 3, 4]
    1 + 2 + 3 + 4 = 10

    Para somar a segunda (índice 1), apenas os elementos:
    [5, 3, 2, 4]
    5 + 3 + 2 + 4 = 14

    E o mesmo para a última (índice 2):
    [2, 2, 2, 2]
    2 + 2 + 2 + 2= 8

    Logo, nosso array de soma ficaria assim:
    [10, 14, 8]
    */
    printf("Somas das Linhas:\n");

    for(int i = 0; i < 3; i++) {
        // Guardar a soma da linha "i"
        int atualSoma = 0;

        // Percorrer a linha "i" da matriz
        for(int j = 0; j < 4; j++) {
            atualSoma += matriz[i][j];
        }

        soma[i] = atualSoma;

        // Imprimir valor guardado em soma[i] 
        printf("%-5.02d", soma[i]);
    }

    printf("\n\n");

    // Multiplicação das Colunas

    /*
    Exemplo
    Consideremos a Matriz:
    [
        0: [1,   2,   3,    4],
        1: [5,   3,   2,    4],
        2: [2,   2,   2,    2]
    ]

    Para multiplicar a primeira coluna, só precisamos dos elementos:
    [1, ...],
    [5, ...],           1 * 5 * 2 = 10.
    [2, ...]

    Para multiplicar a segunda, dos elementos:
    [..., 2, ...],
    [..., 3, ...],      2 * 3 * 2 = 12.
    [..., 2, ...]

    ... Etc.
    No fim, o array "multiplicacao" ficaria assim:
    [10, 12, 12, 32]
    */
    printf("Multiplicacoes das Colunas:\n");

    for(int i = 0; i < 4; i++) {
        // Guardar a soma da coluna "i"
        int multAtual = 1;

        // Percorrer a coluna "i" da matriz, repare na inversão de [i] e [j] nos índices
        for(int j = 0; j < 3; j++) {
            multAtual *= matriz[j][i];
        }

        multiplicacao[i] = multAtual;

        // Imprimir o valor guardado
        printf("%-5.02d", multiplicacao[i]);
    }

    printf("\n");

    return 0;
}