/*
    Um estabelecimento fará uma promoção com descontos nos produtos A e B. Se forem comprados
    apenas os produtos A ou apenas os produtos B, o desconto será de 10%. Caso sejam comprados os
    produtos A e B, o desconto será de 15%. O custo de cada produto é, respectivamente, para os
    produtos A e B, R$10 e R$20. Elaborar um programa que, por meio de módulos, calcule e apresente
    o valor da despesa do freguês na compra dos produtos. Lembre-se de que o freguês pode levar mais
    de uma unidade de um determinado produto
*/

#include <stdio.h>

// Protótipos
int scanQuantidadeComprada(char nome[]);
float calcularDespesa(int a, int b);

// Valor prod A = R$10, B = R$20
const float
    VALOR_A = 10.0,
    VALOR_B = 20.0;

int main() {
    int aComprados = 0, bComprados = 0;
    float valorAPagar = 0;

    aComprados = scanQuantidadeComprada("A");
    bComprados = scanQuantidadeComprada("B");

    valorAPagar = calcularDespesa(aComprados, bComprados);
    
    printf("Valor a pagar: %.2f", valorAPagar);

    return 0;
}

int scanQuantidadeComprada(char nome[]) {
    int q = 0;

    do {
        printf("Insira a quantidade de produtos %s comprados: ", nome);
        scanf("%i", &q);
    } while(q < 0);

    return q;
}

float calcularDespesa(int a, int b) {
    float despesa = 0, descontoPorcentagem = 0;

    if((a > 0 && b == 0) || (b > 0 && a == 0))
        descontoPorcentagem = .10f; 
    else if(b > 0 && a > 0)
        descontoPorcentagem = .15f;

    despesa = (float) a * VALOR_A + (float) b * VALOR_B;
    despesa -= descontoPorcentagem * despesa; // Aplica desconto

    return despesa;
}