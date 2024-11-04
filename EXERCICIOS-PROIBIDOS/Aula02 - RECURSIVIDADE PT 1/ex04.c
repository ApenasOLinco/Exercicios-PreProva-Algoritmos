/*
    Dado n e uma sequência com n números inteiros, imprimir a sequência na ordem inversa a que foi 
    lida, sem usar um vetor
*/

#include <stdio.h>
#include <stdlib.h>

// Protótipos
void imprimirInverso(int n);

int main() {
    int n;

    puts("Insira n:");
    scanf("%i", &n);

    puts("Insira a sequencia:");
    imprimirInverso(n);

    return 0;
}

void imprimirInverso(int n) {
    if(n == 0) return;

    int val = n;
    scanf("%i", &val);
    imprimirInverso(n - 1);
    
    // Após a execução de todas as chamadas de imprimirInverso, começará uma sequência de printf(), começando pelo ultimo numero lido
    printf("%i\n", val);
}