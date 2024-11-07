/*
    Escreva uma função que retorna o maior valor de um array de tamanho N. Escreva um programa
    que leia N valores inteiros, imprima o array com k elementos por linha, e o maior elemento. O valor
    de k também deve ser fornecido pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

// Protótipos
void scanearPositivo(int* i, char mensagem[]);
void inicializarArray(int** arr, int n);
int getMaiorValor(int* arr, int n);
void imprimirArray(int* arr, int n, int k);

int main() {
    int maiorValor, n, k, *arr;

    scanearPositivo(&n, "Qual o tamanho do array?");
    scanearPositivo(&k, "Quantos elementos devem ser impressos por linha?");
    inicializarArray(&arr, n);

    imprimirArray(arr, n, k);

    maiorValor = getMaiorValor(arr, n);
    printf("O maior valor no array eh de %i\n", maiorValor);

    free(arr);
    puts("Memoria liberada!");
}

void scanearPositivo(int *i, char mensagem[]) {
    do {
        puts(mensagem);
        scanf("%i", i);

        if(*i <= 0) puts("So sao permitidos numeros positivos!");
    } while(*i <= 0);
}

void inicializarArray(int **arr, int n) {
    *arr = (int*) malloc(n * sizeof(int));

    srand(time(NULL)); // SEED

    for(int i = 0; i < n; i++) {
        // Números aleatórios de 1 a 100;
        *(*(arr) + i) = rand() % 100 + 1;
    }
}

int getMaiorValor(int *arr, int n) {
    int maior = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(*(arr + i) > maior) maior = arr[i];
    }

    return maior;
}

void imprimirArray(int *arr, int n, int k) {
    for(int i = 0; i < n; i += k) {
        for(int j = 0; j < k; j++) {
            if(i + j >= n) break; // Impede a impressão de elementos fora do array.

            printf("%-5.02d", *(arr + i + j));
        }
        puts(""); // Quebra de linha
    }
}
