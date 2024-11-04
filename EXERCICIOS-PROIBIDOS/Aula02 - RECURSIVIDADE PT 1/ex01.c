/*
    Usando recursividade, calcule a soma de todos os valores de um array de reais
*/

#include <stdio.h>
#include <stdlib.h>

/* Protótipos */
double somaArray(double soma, int index, int arrLength, double arr[]);

int main() {
    double arr[] = {11.5, 11.5, 2, 5}; // Deve dar 30 como resultado!
    
    printf("%lf", somaArray(0, 0, 4, arr));
}

double somaArray(double soma, int index, int arrLength, double arr[]) {
    if(index == arrLength) return soma;

    return somaArray(soma + arr[index], index + 1, arrLength, arr);
}