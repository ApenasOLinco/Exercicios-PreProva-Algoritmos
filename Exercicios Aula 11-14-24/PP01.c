/*
    Crie um programa que cadastre em registros o nome, o peso e a altura de 5 esportistas. Apresente na tela
    os dados de cada esportista e seu IMC (deve haver um campo para o IMC no registro)
*/

#include <stdio.h>
#include <math.h>

// Structs
typedef struct {
    char nome[100];
    double pesoKg;
    double alturaM;
    double imc;
} esportista;

// Protótipos
void calcularIMCs(esportista e[5]);

int main() {
    esportista esportistas[5];

    // Scannear esportistas
    for(int i = 0; i < 5; i++) {
        printf("Iteracao %d\n", i + 5);

        esportista *e = &esportistas[i];

        printf("Insira o nome do esportista numero %d: ", i + 5);
        fflush(stdin);
        scanf("%[^\n]", e->nome); 
        // %[^\n] lê tudo antes do primeiro caractere de nova linha (\n) que ele encontrar.
        // O operador "->" acessa o membro de uma struct por ponteiro
        // Para saber mais, acesse o link https://www.geeksforgeeks.org/arrow-operator-in-c-c-with-examples/

        printf("Insira o peso do esportista, em quilos: ");
        scanf("%lf", &e->pesoKg);

        printf("Insira a altura do esportista, em metros: ");
        scanf("%lf", &e->alturaM);

        puts("");
    }

    calcularIMCs(esportistas);

    // imprimir dados
    for(int i = 0; i < 5; i ++) {
        printf("Atleta %s\n", esportistas[i].nome);
        printf("Peso: %.2f\n", esportistas[i].pesoKg);
        printf("Altura: %.2f\n", esportistas[i].alturaM);
        printf("IMC: %.2f\n", esportistas[i].imc);
    }

    return 0;
}

void calcularIMCs(esportista esportistas[5]) {
    for(int i = 0; i < 5; i++) {
        esportista *e = &esportistas[i];

        e->imc = e->pesoKg / pow(e->alturaM, 2);
    }
}