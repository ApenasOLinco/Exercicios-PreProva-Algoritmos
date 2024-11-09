/*
    Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e N colunas. A
    função deve retornar o ponteiro para um vetor B de tamanho N alocado dinamicamente, em que
    cada posição de B é a soma dos números daquela coluna da matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Protótipos
int **alocarMatriz(int n);
void liberarMatriz(int **a, int n);
int* somarColunas(int** a, int n);

int main() {
    int n = 3;
    int* b = NULL;
    int** a = NULL;

    // Iniciar, popular e imprimir A
    a = alocarMatriz(n);
    srand(time(NULL));

    puts("A:");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j ++) {
            // Numeros aleatórios de 1 a 10
            a[i][j] = rand() % 10 + 1;
            printf("%3.02d", a[i][j]);
        }
        puts("");
    }

    // Iniciar, popular e imprimir B
    puts("B:");
    b = somarColunas(a, n);
    for (int i = 0; i < n; i++) {
        printf("%5.03d", b[i]);
    }

    liberarMatriz(a, n);
    free(b);
    return 0;
}

int **alocarMatriz(int n) {
    int **a = (int**) malloc(n * sizeof(int*));
    if(a == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para a matriz.");
        exit(1);
    }

    for(int i = 0; i < n; i++) {
        a[i] = (int*) malloc(n * sizeof(int));

        if(a[i] == NULL) {
            fprintf(stderr, "Erro ao alocar memoria para a linha %d da matriz. Liberando memoria e saindo.", i);
            liberarMatriz(a, n);
            exit(1);
        }
    }

    return a;
}

void liberarMatriz(int **a, int n) {
    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
    
    free(a);
}

int *somarColunas(int **a, int n) {
    int *b = (int*) malloc(n * sizeof(int));
    if(b == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para o array b, saindo do programa.");
        liberarMatriz(a, n);
        exit(1);
    }

    for(int i = 0; i < n; i++) {
        int soma = 0;

        for (int j = 0; j < n; j++) {
            soma += a[j][i];
        }

        b[i] = soma;
    }

    return b;
}
