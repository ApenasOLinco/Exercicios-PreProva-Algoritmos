/*
    Elaborar um programa que apresente como resultado um número positivo, mesmo que a entrada
    tenha sido feita com um valor negativo. Use um procedimento com passagem de valor por
    referência
*/

#include <stdio.h>

/* Protótipos */
void setAbsoluto(int *val);

int main() {
    int val = -21;

    setAbsoluto(&val);
    printf("Absoluto: %i", val);

    return 0;
}

void setAbsoluto(int *val) {
    if(*val < 0) {
        *val *= -1;
    }
}