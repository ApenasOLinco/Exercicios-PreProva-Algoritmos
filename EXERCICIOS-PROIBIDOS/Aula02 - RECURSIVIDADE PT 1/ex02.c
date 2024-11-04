/*
    Escrever a função recursiva int fib(int n), que retorna o n-ésimo número da sequência de Fibonacci
*/

#include <stdio.h>
#include <stdlib.h>

// Protótipos
int fibonacci(int n);

int main() {
    int n;
    
    do {
        puts("Insira N: ");
        scanf("%i", &n);
    } while (n <= 0);
    
    printf("%i", fibonacci(n));

    return 0;
}

int fibonacci(int n) {
    if(n <= 1) return n; // Chega, no máximo, até n = 0

    return fibonacci(n - 1) + fibonacci(n - 2);
}