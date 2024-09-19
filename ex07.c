/*
    Crie um algoritmo que leia os limites inferior e superior de um
    intervalo e imprima todos os números pares no intervalo aberto e seu
    somatório. Suponha que os números digitados são um intervalo crescente.
    Exemplo:
        ● Limite inferior: 3
        ● Limite superior: 12
        ● Saída: 4 6 8 10
        ● Soma: 28
*/

#include <stdio.h>

int main() {
    int inferior, superior, soma = 0;
    short flag = 0;

    do {
        if(flag) {
            printf("O limite inferior deve ser menor que o limite superior!\n");
        }

        printf("Insira o limite inferior: ");
        scanf("%i", &inferior);
        
        printf("Insira o limite superior: ");
        scanf("%i", &superior);

        if(inferior > superior)
            flag = 1;
    } while(inferior > superior);

    int i = inferior % 2 == 0 ? inferior : inferior + 1;

    for(; i <= superior; i += 2) {
        printf("%i ", i);
        soma += i;
    }

    printf("\nSoma: %i", soma);
    
    return 0;
}