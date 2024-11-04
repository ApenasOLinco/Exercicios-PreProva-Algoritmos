/*
    Crie um programa que calcule XY (X elevado a Y), sendo que os valores de X e Y devem ser números
    do tipo double, positivos, informados pelo usuário. O resultado deve ser exibido na tela.
*/

#include <stdio.h>

void elevar(double x, double y);

int main() {
    double x, y;

    do {
        printf("Insira um numero real positivo: ");
        scanf("%lf", &x);
    } while(x <= 0);

    do {
        printf("Insira outro numero real positivo: ");
        scanf("%lf", &y);
    } while(y <= 0);


    elevar(x, y);

    return 0;
}

void elevar(double x, double y) {
    double resultado = 1;
    for(int i = 0; i < y; i++)
        resultado *= x;

    printf("Resultado: %.2lf", resultado);
}