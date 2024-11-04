/*
    Escreva uma função que recebe três valores reais como parâmetros: nota1, nota2 e nota3,
    representando as notas de um aluno em três disciplinas diferentes. A função deve calcular e
    retornar a média ponderada das notas, considerando os pesos: peso1 = 2, peso2 = 3 e peso3 = 5.
    Em seguida, chame a função e imprima o resultado
*/

#include <stdio.h>

float mediaPonderada(float nota1, float nota2, float nota3) {
    float peso1 = 2, peso2 = 3, peso3 = 5;

    return (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
}


int main() {
    float nota1, nota2, nota3;
    
    puts("Insira a primeira nota:");
    scanf("%f", &nota1);
    
    puts("Insira a segunda nota:");
    scanf("%f", &nota2);

    puts("Insira a terceira nota:");
    scanf("%f", &nota3);
    
    printf("Media ponderada: %f", mediaPonderada(nota1, nota2, nota3));

    return 0;
}