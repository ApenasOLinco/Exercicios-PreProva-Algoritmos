/*
    Escreva um algoritmo que encontre o quinto número maior que
    1000 cuja divisão por 11 tenha resto 5.
*/

#include <stdio.h>

int main() {
    int n = 0, resultado;

    for(int i = 1000;; i++) {
        if(i % 11 == 5) {
            n++;
            printf("Econtrado (%i): %i %% 5 = %i\n", n, i, i % 11);
        }

        if(n == 5) {
            resultado = i;
            break;
        }
    }

    printf("O quinto numero maior que 100 cuja divisao por 11 tem resto 5 eh %i", resultado);

    return 0;
}