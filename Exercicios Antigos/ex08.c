/*
    Escreva um algoritmo para validar um lote de recibos bancários.
    O programa deverá inicialmente solicitar o valor (soma) total do lote e o
    número de recibos. A seguir deverá ler o valor de cada recibo calculando o
    valor (soma) total. Após a digitação dos valores de todos os recibos, o
    programa deverá imprimir as seguintes mensagens: “LOTE Ok” se a soma
    informada for igual a soma calculada; “Diferença negativa” se a soma calculada
    for menor que a informada; e “Diferença positiva” se a soma calculada for
    maior que a informada. Observação: O valor da diferença deve ser impresso
    (caso exista).
*/

#include <stdio.h>

int main()
{
    float somaInformada, somaReal = 0, diff = 0;
    int numRecibos;

    printf("Insira o valor total a ser pago: ");
    scanf("%f", &somaInformada);

    printf("Insira a quantidade de recibos a serem processados: ");
    scanf("%i", &numRecibos);

    for(int i = 0; i < numRecibos; i++) {
        float reciboAtual;
        printf("Insira o valor do recibo n%i: ", i+1);
        scanf("%f", &reciboAtual);

        somaReal += reciboAtual;
    }

    if(somaReal == somaInformada)
        printf("Lote OK\n"); 
    else if(somaReal < somaInformada)
        printf("Diferenca negativa.\nDiferenca: %f", diff);
    else
        printf("Diferenca positiva.\nDiferenca: %f", diff);

    return 0;
}
