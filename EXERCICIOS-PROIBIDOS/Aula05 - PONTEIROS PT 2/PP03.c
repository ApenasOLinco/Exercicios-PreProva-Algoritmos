/*
    Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe o
    ponteiro ao array. Agora, some mais um a cada posição do array usando o ponteiro.
*/

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *parr = arr;

    for(int i = 0; i < 5; i++) {
        *(parr + i) = *(parr + i) + 1;
        printf("%i: %i\n", i, arr[i]);
    }

    return 0;
}