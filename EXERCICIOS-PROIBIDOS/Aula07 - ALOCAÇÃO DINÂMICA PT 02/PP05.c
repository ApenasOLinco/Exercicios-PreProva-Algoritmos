/*
    Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro para uma matriz
    alocada dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 1 na
    diagonal principal e 0 nas demais posições.
*/

#include <stdio.h>
#include <stdlib.h>

// Protótipos
int** iniciarEPopularMatriz(int n);
void limparMatriz(int **mat, int n);

int main() {
    int n = 20;
    int **mat = iniciarEPopularMatriz(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%3d", mat[i][j]);
        }
        puts("");
    }

    limparMatriz(mat, n);
    return 0;
}

int **iniciarEPopularMatriz(int n) {
    if(n <= 0) {
        fprintf(stderr, "Nao sao permitidos numeros negativos para o tamanho da matriz!");
        exit(1);
    }

    // Iniciar Matriz
    int **mat = (int**) malloc(n * sizeof(int*));
    if(mat == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para a matriz. Saindo.");
        exit(1);
    }

    // Iniciar linhas
    for(int i = 0; i < n; i++) {
        mat[i] = (int*) malloc(n * sizeof(int));

        if(mat[i] == NULL) {
            fprintf(stderr, "Erro ao alocar memoria para uma das linhas da matriz. Limpando memoria e saindo.");
            limparMatriz(mat, n);
            exit(1);
        }
    }

    // Popular Matriz
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j)  mat[i][j] = 1; // Diagonal principal
            else        mat[i][j] = 0; // Demais posições
        }
    }

    return mat;
}

void limparMatriz(int **mat, int n) {
    // Limpar linhas
    for(int i = 0; i < n; i++) {
        free(mat[i]);
    }

    free(mat);
}