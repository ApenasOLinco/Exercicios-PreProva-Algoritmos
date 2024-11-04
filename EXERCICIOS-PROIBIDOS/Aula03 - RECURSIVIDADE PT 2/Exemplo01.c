/*
    Escreva um programa em C que recebe dois números positivos não nulos a e b, e retorna o 
    resultado de a * b sem utilizar a operação de multiplicação ou recursividade
*/

#include <stdio.h>

// Protótipos
void scanPositiveNum(int *num, char nome[]);
int multiplicar(int a, int b, int soma);

int main() {
    int a, b, resultado;

    scanPositiveNum(&a, "a");
    scanPositiveNum(&b, "b");

    resultado = multiplicar(a, b, 0);
    printf("%i", resultado);

    return 0;
}

void scanPositiveNum(int *num, char nome[]) {
    do {
        printf("Insira um valor para %s: ", nome);
        scanf("%i", num);
    } while(*num <= 0);
}

int multiplicar(int a, int b, int soma) {
    if(b == 0) return 0;
    if(b == 1) return soma + a;

    return multiplicar(a, b - 1, soma + a);
}