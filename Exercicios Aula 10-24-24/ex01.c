/*
    Leia do teclado valores para um vetor de 10 elementos inteiros,
    pares e positivos. Crie um segundo vetor da seguinte forma: os elementos de
    índices pares receberão os respectivos elementos divididos por 2; os
    elementos de índices ímpares receberão os respectivos elementos
    multiplicados por 3. Imprima os dois vetores.
*/

#include <stdio.h>

int main() {
    int 
    vetor[10] = {
        2, 4, 6, 8, 10, 12, 14, 18, 20, 22
    },
    resultado[10];

    for(int i = 0; i < 10; i++) {
        /* 
            O código abaixo desse comentário é um operador ternário, que funciona,
            basicamente, como um if/else em uma só linha. É o mesmo que ter escrito:

            """
                if(i % 2 == 0) {
                    resultado[i] = vetor[i] / 2;
                }
                else
                    resultado[i] = vetor[i] * 3;
            """

            Apenas tenha isso em mente:
            - O código entre parênteses é a condição a ser testada (não precisa estar entre parênteses, mas é bom para o entendimento);
            - O que vem depois do "?" na expressão é o valor caso a condição seja verdadeira;
            - Por fim, o que vem depois do ":" é o valor caso ela seja falsa, o equivalente a um bloco "else".
        */
        resultado[i] = (i % 2 == 0) ? vetor[i] / 2 : vetor[i] * 3;
        
        printf("indice %i: %i\n", i, resultado[i]);
    }

    return 0;
}
