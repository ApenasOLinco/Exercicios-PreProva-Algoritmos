/*
    Construa um algoritmo que receba um número inteiro e verifique
    se o mesmo é primo.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    
    printf("Insira um numero inteiro: ");
    scanf("%i", &num);

    if(num <= 1) {
        printf("Nao primo");
        return 0;
    }

    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            printf("Nao primo.");
            return 0;            
        }
    }

    printf("Primo.");

    return 0;
}