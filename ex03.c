/*
    Faça um programa que leia n números e, para cada desses
    números, diga se é primo ou não. Pare a repetição quando
    for lido um número negativo
*/

#include <math.h>
#include <stdio.h>

int main() {
    for(;;) {
        printf("\n");
        int num;
        short flag = 0;
        
        printf("Insira um numero inteiro: ");
        scanf("%i", &num);

        if(num < 0) {
            printf("Numero negativo. Encerrando aplicacao.");
            break;
        }

        if(num <= 1) {
            printf("Nao primo.");
            continue;
        }

        for(int j = 2; j <= sqrt(num); j++) {
            if(num % j == 0) {
                printf("Nao primo.");
                flag = 1;
                break;
            }
        }

        if(!flag)
            printf("Primo.");
    }

    return 0;
}