/*
    Escrever um programa para ler uma frase qualquer do teclado e imprimir, esta mesma frase, um
    caractere por vez usando aritmética de ponteiros e ponteiros para ponteiros.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char *pFrase = frase;
    puts("Insira uma frase qualquer: ");
    fgets(frase, 100, stdin);

    for(unsigned int i = 0; i < strlen(frase); i++) {
        printf("%c\n", *(pFrase + i));
    }

    return 0;
}