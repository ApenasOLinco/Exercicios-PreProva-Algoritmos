/* 
    Crie um programa que contenha um array de inteiros contendo cinco elementos. Utilizando apenas
    aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
*/

#include <stdio.h>

int main() {
    int arr[5];

    for(int i = 0; i < 5; i++) {
        printf("Insira um numero inteiro (%i de 5): ", i + 1);
        scanf("%i", arr+i);
    }

    printf("--------------------------------------\n");

    for(int i = 0; i < 5; i++) {
        printf("%i: %i\n", i, *(arr + i) * 2);
    }
}