/*
    Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for inválido, o usuário
    deverá digitar outro até que ele seja válido (ou seja, positivo). Em seguida, leia um vetor V contendo
    N posições de inteiros, em que cada valor deverá ser maior ou igual a 2. Esse vetor deverá ser
    alocado dinamicamente.
*/

#include <stdlib.h>
#include <stdio.h>

void lerInt(int *p, const char mensagem[], int min);
void lerVetor(int *v, int n);

int main() {
    int n, *v = NULL;
    lerInt(&n, "Insira o tamanho do vetor:", 1);

    v = (int*) malloc(n * sizeof(int));
    if(v == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para \"v\"");
        exit(1);
    }

    lerVetor(v, n);

    for(int i = 0; i < n; i++) {
        printf("%7.03d", v[i]);
    }
    
    free(v);

    return 0;
}

void lerInt(int *p, const char mensagem[], int min) {
    do {
        puts(mensagem);
        scanf("%d", p);
        if(*p < min) printf("O numero deve ser maior ou igual a %d!\n", min);
    } while(*p < min);
}

void lerVetor(int *v, int n) {
    for(int i = 0; i < n; i++) {
        char mensagem[50];
        sprintf(mensagem, "Pos. %d, insira:", i);
        lerInt(&v[i], mensagem, 2);
    }
}