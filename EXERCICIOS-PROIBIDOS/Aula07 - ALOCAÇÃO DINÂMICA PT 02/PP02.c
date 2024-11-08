/*
    Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões da matriz
    deverão ser lidas do usuário. Em seguida, escreva uma função que receba um valor e retorne 1,
    caso o valor esteja na matriz, ou retorne 0, no caso contrário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void iniciarMatriz(int*** matriz, int lin, int col);
void popularMatriz(int** matriz, int lin, int col);
void limparMatriz(int** matriz, int lin);
int lerPos(char mensagem[]);
int matrizContem(int** matriz, int lin, int col, int alvo);


int main() {
    int **matriz = NULL, lin, col, alvo;
    lin = lerPos("Insira a quantidade de linhas da matriz:");
    col = lerPos("Insira a quantidade de colunas da matriz:");
    iniciarMatriz(&matriz, lin, col);
    popularMatriz(matriz, lin, col);
    
    alvo = lerPos("Insira o numero a ser procurado (a matriz foi populada com numeros de 0 a 100):");
    if(matrizContem(matriz, lin, col, alvo)) {
        puts("A matriz contem o numero inserido!");
    } 
    else puts("A matriz nao contem o numero inserido...");
    
    limparMatriz(matriz, lin);
    
    return 0;
}

int lerPos(char mensagem[])
{
    int val;

    do {
        puts(mensagem);
        scanf("%d", &val);

        if(val <= 0) puts("O numero deve ser positivo!");   
    } while(val <= 0);

    return val;
}

void iniciarMatriz(int ***matriz, int lin, int col) {
    // Inicia as linhas
    *matriz = (int**) malloc(lin * sizeof(int*));
    if(*matriz == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para a matriz.");
        exit(1);
    }

    // Inicia as colunas
    for(int i = 0; i < lin; i++) {
        (*matriz)[i] = (int*) malloc(col * sizeof(int));

        // Erro de alocação na coluna atual
        if((*matriz)[i] == NULL) {
            fprintf(stderr, "Erro ao alocar memoria para a matriz. Limpando e saindo.");
            limparMatriz(*matriz, lin);
            exit(1);
        }
    }
}

void popularMatriz(int **matriz, int lin, int col) {
    srand(time(NULL));

    for(int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            matriz[i][j] = rand() % 101;

            printf("%5.03d", matriz[i][j]);
        }
        puts(",");
    }
}

int matrizContem(int **matriz, int lin, int col, int alvo) {
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) {
            if(matriz[i][j] == alvo) return 1;
        }
    }
    
    return 0;
}

void limparMatriz(int **matriz, int lin) {
    // Liberar todas as linhas
    for(int i = 0; i < lin; i++) {
        free(matriz[i]);
    }

    // Liberar a matriz
    free(matriz);
}