/*
    Crie um algoritmo que ajude o DETRAN a saber o total de
    recursos que foram arrecadados com a aplicação de multas de trânsito. O
    algoritmo deve ler as seguintes informações para cada motorista:
        ● O número da carteira de motorista (de 1 a 4327)
        ● Número de multas;
        ● Valor da cada uma das multas.
    Deve ser impresso o valor da dívida de cada motorista e, ao final da
    leitura, o total de recursos arrecadados (somatório de todas as multas). O
    algoritmo deverá imprimir também o número da carteira do motorista que
    obteve o maior número de multas
*/

#include <stdio.h>

int main() {
    int maisMultas = 0;
    float recursosArrecadados = 0;

    for(;;) {
        int numCarteira, numMultas;
        float somaMultas = 0;

        do {
            printf("Insira o numero da carteira (1-4327), 0 para encerrar: ");
            scanf("%i", &numCarteira);
        } while(numCarteira < 0 || numCarteira > 4329);

        if(numCarteira == 0) break;

        printf("Insira o numero de multas: ");
        scanf("%i", &numMultas);

        if(numMultas > maisMultas) maisMultas = numCarteira;

        for(int i = 0; i < numMultas; i++) {
            float valorMulta;
            printf("Insira o valor da multa n%i: ", i + 1);
            scanf("%f", &valorMulta);

            somaMultas += valorMulta;
        }

        printf("Valor total da divida: R$%.2f\n", somaMultas);
        recursosArrecadados += somaMultas;
    }

    printf("Recursos arrecadados: R$%.2f\n", recursosArrecadados);
    printf("O motorista que possui o maior numero de multas possui a carteira numero %i\n", maisMultas);

    return 0;
}