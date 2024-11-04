/*
    Escreva uma função que recebe uma temperatura em graus Celsius como parâmetro e a converte
    para graus Fahrenheit. Em seguida, chame a função e imprima o resultado
*/

#include <stdio.h>

float paraFahrenheit(float cel) {
    return cel * 1.8 + 32.0;
}

int main() {
    float cel, fah;

    printf("Insira a temperatura em °C: ");
    scanf("%f", &cel);

    fah = paraFahrenheit(cel);
    printf("Em fahrenheit: %f", fah);

    return 0;
}