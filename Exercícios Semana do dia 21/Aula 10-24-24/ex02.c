/*
    Escreva um programa que sorteie aleatoriamente 1000 números
    e armazene-os em um vetor. Em seguida, o usuário deve digitar um número e
    seu programa deve informar se o número digitado está contido no vetor ou
    não. Se estiver, diga em que posições do vetor ele é encontrado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros[1000], alvo = 0;
    srand(time(NULL));

    /* Preenchimento do vetor */
    for(int i = 0; i < 1000; i ++) {
        // Números no intervalo [0, 1000]
        numeros[i] = rand() % 1001;
    }
    
    /* Input do usuário, loop infinito */
    while(1) {
        printf("Insira um numero de 0 a 1000 (numero negativo para encerrar): ");
        scanf("%i", &alvo);

        /* Terminar execução */
        if(alvo < 0) break;

        /* Procurar o numero inserido */
        int encontrados = 0;
        for(int i = 0; i < 1000; i++) {
            
        }
    }

    return 0;
}