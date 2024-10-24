/*
    Foi realizada uma pesquisa entre os habitantes de uma região e
    coletados os dados de altura e sexo (0 = masc, 1 = fem, 2 = não declarado)
    das pessoas. Faça um programa que leia 50 dados diferentes e informe:
        ● a maior e a menor altura encontradas;
        ● a média de altura das mulheres;
        ● a média de altura da população;
        ● o percentual de homens na população
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float 
        maiorAltura = 0, menorAltura = 0,
        somaAlturasMulheres = 0, somaAlturas = 0,
        mediaAlturaMulheres, mediaAlturaPopulacao,
        percentualHomens;

    int 
        numEntrevistados = 50,
        numMasc = 0,
        numFem = 0,
        numND = 0;

    for(int i = 0; i < numEntrevistados; i++) {
        float altura;
        short sexo = 2;

        printf("Insira a altura do cidadao: ");
        scanf("%f", &altura);

        if(altura > maiorAltura)
            maiorAltura = altura;
        if(altura < menorAltura || menorAltura == 0)
            menorAltura = altura;

        somaAlturas += altura;

        printf("Insira o sexo do cidadao\n  masc = 0\n  fem = 1\n  nao declarar = 2\n");
        scanf("%hd", &sexo); 

        if(sexo == 0)
            numMasc ++;
        else if(sexo == 1) {
            numFem++;
            somaAlturasMulheres+=altura;
        }
        else if(sexo == 2)
            numND++;
    }

    mediaAlturaMulheres = somaAlturasMulheres / (float) numFem;
    mediaAlturaPopulacao = somaAlturas / (float) numEntrevistados;
    percentualHomens = (float) numMasc / (float) numEntrevistados * 100.0f;

    printf(
    "Pesquisa finalizada! Aqui estao os dados obtidos:\n\
        A maior altura foi de %.2fm, enquanto a menor foi de %.2fm\n\
        A media da altura das mulheres foi de %.2fm, e a da populacao em geral foi de %.2fm\n\
        Cerca de %.0f%% dos entrevistados sao do sexo masculino\n"
    , maiorAltura, menorAltura, mediaAlturaMulheres, mediaAlturaPopulacao, percentualHomens);

    return 0;
}