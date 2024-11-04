/*
    Escreva um programa em C para inverter uma string usando recursão
*/

#include <stdio.h>
#include <string.h>

// Protótipos
void inverterStr(char string[], int i);

int main() {
    char string[100];

    puts("Insira uma string:");
    fflush(stdin);
    fgets(string, 100, stdin);

    inverterStr(string, 0);
    puts(string);
}

/*
    Minha solução se resume no uso de dois ponteiros: Ponteiro1 e Ponteiro2.
    Ponteiro1 está localizado, inicialmente, no início da string
    Ponteiro2 está localizado, inicialmente, no final da string

    A cada chamada de função, Ponteiro1 se move à direita e Ponteiro2, à esquerda.
    Tudo o que resta fazer é trocar os caracteres localizados em Ponteiro1 e Ponteiro2.
*/
void inverterStr(char string[], int i) {
    int ponteiro1 = i;
    int ponteiro2 = strlen(string) - 1 - i;

    if(ponteiro2 <= ponteiro1) return;

    char temporario = string[ponteiro1];
    string[ponteiro1] = string[ponteiro2];
    string[ponteiro2] = temporario;

    inverterStr(string, i + 1);
}