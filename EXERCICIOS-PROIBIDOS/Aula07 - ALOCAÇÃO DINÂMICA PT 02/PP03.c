/*
    Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros alocados
    dinamicamente. O array deve ser preenchido com valores de 0 a N − 1.
*/

#include <stdio.h>
#include <stdlib.h>

// Protótipos
int* alocarVetor(unsigned int n);
void preencherVetor(int* vet, unsigned int n);

int main() {
    unsigned int n = 20U;
    int* vet = alocarVetor(n);
    preencherVetor(vet, n);

    free(vet);
    return 0;
}

int *alocarVetor(unsigned int n) {
    int* vet = NULL;
    vet = (int*) malloc(n * sizeof(int));

    if(vet == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para o vetor. Saindo do programa.");
        exit(1);
    }

    return vet;
}

void preencherVetor(int *vet, unsigned int n) {
    for(unsigned int i = 0; i < n; i++) {
        vet[i] = i;
        printf("%5.02d", vet[i]);
    }
}
