/*
    Escreva um programa que sorteie aleatoriamente 1000 números
    e armazene-os em um vetor. Em seguida, o usuário deve digitar um número e
    seu programa deve informar se o número digitado está contido no vetor ou
    não. Se estiver, diga em que posições do vetor ele é encontrado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void encontrarEm(int* arr, int arrSize, int alvo) {
    int encontrados = 0;
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] == alvo) {
            printf(
                "Encontrado valor %i:\n    Posicao: %i\n\n",
                alvo, i
            );

            encontrados ++;
        }   
    }

    if(encontrados == 0) {
        printf("Nao ha ocorrencias do numero no array.\n\n");
    }
}

int main() {
    int numeros[1000], alvo = 0;
    srand(time(NULL));

    for(int i = 0; i < 1000; i ++) {
        numeros[i] = rand() % 1001;
    }

    do {
        printf("Insira um numero de 0 a 1000 (numero negativo para encerrar): ");
        scanf("%i", &alvo);

        if(alvo >= 0) {
            encontrarEm(numeros, 1000, alvo);
        }
    } while(alvo > 0);

    return 0;
}