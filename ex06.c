/*
    Escreva um algoritmo que leia vários números e informe quantos
    números entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o
    algoritmo deverá cessar sua execução.
*/

#include <stdio.h>

int main() {
    int cont = 0;

    while(1) {
        int num;
        printf("Insira um numero: ");
        scanf("%i", &num);

        if(num > 100 && num < 200) {
            cont++;
            printf("+1: %i\n", cont);
        }
        if(num == 0) break;
    }

    printf("Foram inseridos %i numeros entre 100 e 200", cont);

    return 0;
}