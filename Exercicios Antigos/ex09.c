/*
    Escreva um algoritmo para solicitar o valor de N (inteiro) e gerar H
    (real) conforme a fórmula a seguir:
        H = 1 + (1 / 2) + (1 / 3) + ... + (1 / N)
*/

#include <stdio.h>

int main() {
    int n;
    float h = 0;

    printf("Insira N: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        h += 1.0f / (float) i;
    }
    
    printf("H = %f", h);
    
    return 0;
}