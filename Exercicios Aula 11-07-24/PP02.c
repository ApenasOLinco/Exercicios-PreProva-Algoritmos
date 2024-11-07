/*
    Crie um programa que leia um número de 1 a 12 e imprima o nome do mês correspondente
*/

#include <stdio.h>

int main() {
    char meses[12][20] = {
        "Janeiro", "Fevereiro", 
        "Marco", "Abril",
        "Maio", "Junho",
        "Julho", "Agosto",
        "Setembro", "Outubro",
        "Novembro", "Dezembro"
    };
    
    int num = 0;

    do {
        printf("Insira um numero de 1 a 12: ");
        scanf("%i", &num);
    } while(num < 1 || num > 12);

    printf("O mes numero %i eh %s", num, meses[num - 1]);

    return 0;
}
