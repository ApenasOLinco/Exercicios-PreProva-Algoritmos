/*
    Escreva uma função que recebe uma string (ponteiro para caracteres) e dois índices como
    parâmetros. A função deve criar uma nova string que contenha os caracteres da string original
    entre os índices fornecidos usando aritmética de ponteiros.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Protótipos
char* substring(char str[], unsigned int ind1, unsigned int ind2);

int main() {
    char str[] = "Cacefalo", *substr = NULL;
    substr = substring(str, 1, 7);

    puts(substr);
    return 0;
}

char* substring(char str[], unsigned int ind1, unsigned int ind2) {
    if(ind2 < ind1) {
        puts("Index 2 e menor que Index 1!");
        exit(1);
    }

    if(ind2 >= strlen(str)) {
        puts("Index2 e maior que o tamanho da string original!");
        exit(1);
    }

    int length = ind2 - ind1 + 1;
    static char substr[100];

    for(int i = 0; i < length; i++) {
        *(substr + i) = *(str + ind1 + i);
    }

    return substr;
}