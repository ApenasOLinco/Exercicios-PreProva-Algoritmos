/*
    Escreva um programa que exiba o quadrado de um número digitado no teclado.
    Escreva uma função para ler esse número e um procedimento para calcular seu quadrado
*/

#include <stdio.h>

int lerNumero(char m[]) {
    int x;

    printf("%s", m);
    scanf("%i", &x);
    
    return x;
}

int quadrado(int x) {
    return x * x;
}

int main() {
    int x = lerNumero("Insira: ");

    printf("Quadrado de %i: %i", x, quadrado(x));

    return 0;
}