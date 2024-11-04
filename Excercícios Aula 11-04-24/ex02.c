/*
    Elaborar um módulo que apresente a mensagem "Este valor é divisível por 2 ou 3". Deve ser
    solicitado pelo programa principal o valor a ser verificado. Caso o valor não atenda à condição
    desejada, o módulo deve apresentar a mensagem "Valor inválido".
*/

#include <stdio.h>

void divPorDoisOuTres(int num) {
    if(num % 2 == 0 || num % 3 == 0) {
        puts("Esse valor e divisivel por 2 ou 3");
        return;
    }

    puts("Valor invalido");
}

int main() {
    int num;
    
    printf("Insira o valor divisivel por 2 ou por 3: ");
    scanf("%i", &num);

    divPorDoisOuTres(num);
    
    return 0;
}