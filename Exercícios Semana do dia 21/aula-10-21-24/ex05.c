/*
    Uma empresa possui três lojas, cada uma com 6 funcionários. Escreva um programa que forneça à
    gerência algumas informações relativas aos salários dos funcionários dessa empresa. Os salários
    devem ser armazenados em uma matriz bidimensional (loja X funcionário). O programa deve:
        a. preencher a matriz de salários por leitura do teclado;
        b. imprimir os salários de todos os funcionários, identificando qual a loja em que trabalha;
        c. imprimir o total pago em salários por loja;
        d. informar quantos funcionários recebem salário superior a R$ 2.000,00 na primeira loja;
        e. informar a média salarial da segunda loja
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float salarios[3][6], somaSalarios[3], mediaLoja2;
    int maiorQDoisMil = 0;

    // Povoamento aleatório da matriz
    srand(time(NULL));

    for(int i = 0; i < 3; i ++) {
        float totalPago = 0;
        
        // Identificação da Loja
        printf("--- LOJA %i ---\n", i + 1);

        for(int j = 0; j < 6; j ++) {
            // Valores decimais entre 1200 e 2600 (inclusivo)
            salarios[i][j] = ((float)rand() / RAND_MAX) * 1200.0 + 1400;
            
            totalPago += salarios[i][j];

            // Impressão do salario do funcionário "j"
            printf("Funcionario %i: R$%.2f\n", j + 1, salarios[i][j]);
        }

        somaSalarios[i] = totalPago;
        printf("Total pago mensal: R$%.2f\n", somaSalarios[i]);
        printf("\n");
    }

    // Salário superior a R$2000.00 na primeira loja
    for(int i = 0; i < 6; i++) {
        float salario = salarios[0][i];

        if(salario > 2000.00) maiorQDoisMil++;
    }
    printf("%i funcionario(s) recebe(m) um salario maior que R$2000.00 na primeira loja\n", maiorQDoisMil);

    // Média salarial da segunda loja
    mediaLoja2 = somaSalarios[1] / 6;
    printf("Media salarial da segunda loja: %.2f", mediaLoja2);

    return 0;
}