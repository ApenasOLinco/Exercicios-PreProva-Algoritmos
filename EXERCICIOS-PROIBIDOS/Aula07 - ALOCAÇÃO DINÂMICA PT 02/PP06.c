/*
    Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho N cada. A função
    deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que C[i] = A[i]
    * B[i].
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* multiplicarVetores(int *a, int *b, int n);
void liberarMemoria(int* a, int* b, int* c);

int main() {
    int *a = NULL, 
        *b = NULL, 
        *c = NULL, 
        n = 5;

    // Alocar memória para A e B
    a = (int*) malloc(n * sizeof(int));
    b = (int*) malloc(n * sizeof(int));

    if(a == NULL || b == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para o vetor a ou para o vetor b. Encerrando o programa.");
        liberarMemoria(a, b, c);
        exit(1);
    }

    // Preencher A e B
    srand(time(NULL));
    
    for(int i = 0; i < n; i++) {
        a[i] = rand() % 10;
        b[i] = rand() % 10;
    }

    // Alocar memória e preencher C
    c = multiplicarVetores(a, b, n);

    // Imprimir vetores
    for(int i = 0; i < n; i++) {
        printf("A[%d]: %d, B[%d]: %d, C[%d]: %d\n", i, a[i], i, b[i], i, c[i]);
    }

    liberarMemoria(a, b, c);
    return 0;
}

int *multiplicarVetores(int *a, int *b, int n) {
    int *c = malloc(n * sizeof(int));
    if(c == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para o vetor C. Saindo do programa.");
        liberarMemoria(a, b, c);
        exit(1);
    }

    for(int i = 0; i < n; i++) {
        c[i] = a[i] * b[i];
    }

    return c;
}

void liberarMemoria(int *a, int *b, int *c) {
    free(a);
    free(b);
    free(c);
}
