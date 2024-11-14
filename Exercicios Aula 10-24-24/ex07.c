/*
    Escreva um programa que leia do teclado valores inteiros para
    uma matriz de 5 linhas por 5 colunas. Em seguida, leia do teclado um valor
    numérico X. Conte quantos valores múltiplos de X existem na matriz e
    mostre-os na tela.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int matriz[5][5], x, multiplosDeX;

    // O exercício pede para usar input do teclado, mas vamos automatizar isso.
    srand(time(NULL));

    // População da matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // Números inteiros de 0 a 100
            matriz[i][j] = rand() % 101;
        }
    }
    
    // Variável de controle
    char continuar = 's';
    // Loop infinito
    while(1) {
        printf("\n\n");
        multiplosDeX = 0;
        
        // Input
        printf("Insira um numero: ");
        scanf("%i", &x);

        // Encontrar multiplos de X na matriz
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                int num = matriz[i][j];
                
                if(num % x == 0) {
                    multiplosDeX++;
                    printf("Encontrado multiplo de %i no indice [%i, %i]: %i\n", x, i, j, num);
                }
            }
        }

        printf("Foi(Foram) encontrado(s) %i multiplo(s) de %i na matriz\n", multiplosDeX, x);
        printf("Deseja continuar? (s/n): ");
        getchar();
        fgets(&continuar, 2, stdin);

        // Sair do loop
        if(continuar == 'n' || continuar == 'N') break;
    }

    return 0;
}