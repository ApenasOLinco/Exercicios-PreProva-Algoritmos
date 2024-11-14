/*
    Escreva um programa que verifica se uma string é um
    palíndromo, ou seja, é a mesma quando lida de trás para frente ou de frente
    para trás.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char entrada[150], inversa[150];

    printf("Insira uma string: ");
    scanf("%s", entrada); // Vale a pena lembrar que arrays não precisam do operador "&" dentro de scanf!

    // Tamanho da string entrada pelo usuário
    int entradaTamanho = strlen(entrada);

    // Inverter a string entrada
    for(int i = 0; i < entradaTamanho; i++) {
        inversa[i] = entrada[entradaTamanho - 1 - i];
    }

    // Verificar se é palíndromo
    int isPalindromo = 1; // Valor 0 = falso, Valor 1 = verdadeiro

    for(int i = 0; i < entradaTamanho; i++){
        if(entrada[i] == inversa[i]) {
            // Não fazer nada, apenas continuar o loop a partir da próxima iteração
            continue; 
        }

        // Se 'continue' não foi acionado, significa que os dois caracteres -não- são iguais
        isPalindromo = 0;
        break;
    }

    // Imprimir resultado
    if(isPalindromo)
        printf("A string inserida eh um palindromo.\n");
    else
        printf("A string inserida nao eh um palindromo.\n");

    return 0;
}