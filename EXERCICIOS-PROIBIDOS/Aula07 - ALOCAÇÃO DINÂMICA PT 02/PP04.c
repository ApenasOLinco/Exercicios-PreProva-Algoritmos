/*
    Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro
    para um vetor de tamanho N alocado dinamicamente. Esse vetor deverá ter os seus elementos
    preenchidos com certo valor, também passado por parâmetro. Se N for negativo ou igual a zero, um
    ponteiro nulo deverá ser retornado.
*/

#include <stdio.h>
#include <stdlib.h>

// Protótipos
int* alocarEPreencher(int n, int val);

int main() {
    int n = 10;
    int val = 2;
    int *vet = alocarEPreencher(n, val);

    free(vet);
    return 0;
}

int *alocarEPreencher(int n, int val) {
    if(n <= 0) return NULL;
    
    int *vet = (int*) malloc(n * sizeof(int));
    if(vet == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para o vetor, encerrando programa.");
        exit(1);
    }

    for(int i = 0; i < n; i++) {
        vet[i] = val;
        printf("%5.03d", vet[i]);
    }

    return vet;
}
