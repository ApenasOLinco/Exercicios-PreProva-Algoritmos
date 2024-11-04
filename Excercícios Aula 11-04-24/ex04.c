/*
    Escreva uma função que recebe um número inteiro como parâmetro e verifica se ele é um número
    perfeito. Um número perfeito é aquele cuja soma de seus divisores (excluindo ele mesmo) é igual a
    ele. Em seguida, chame a função para verificar se um número fornecido pelo usuário é perfeito
*/

#include <stdio.h>

void isPerfeito(int num) {
    int somaDosDivisores = 0;

    for(int i = 1; i < num; i++){
        if(num % i == 0) {
            printf("Somando %i\n", i);
            somaDosDivisores += i;
        }
    }
    
    if(somaDosDivisores == num) {
        puts("O numero inserido eh perfeito.");
    } else {
        puts("O numero inserido nao eh perfeito.");
    }
}

int main() {
    int num;

    puts("Insira um numero inteiro: ");
    scanf("%i", &num);

    isPerfeito(num);

    return 0;
}