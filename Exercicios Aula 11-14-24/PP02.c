/*
    Crie um programa que armazene o resultado de 5 jogos realizados em uma rodada do campeonato
    brasileiro de futebol. Para cada jogo, será necessário armazenar as seguintes informações:
        a. Data do jogo;
        b. Time mandante;
        c. Time visitante;
        d. Gols do mandante;
        e. Gols do visitante.
    Depois dos dados informados, o algoritmo deve escrever na tela os dados de cada jogo, indicando quem foi
    o vencedor ou se deu empate. Utilize um vetor de registros na sua implementação
*/

#include <stdio.h>
#include <string.h>

// Structs
typedef struct {
    int dia;
    int mes;
} data;

typedef struct {
    char nome[100];
    int gols;
} time;


typedef struct {
    time mandante;
    time visitante;
    data data;
} jogo;

// Defines
#define NUM_JOGOS 5

int main() {
    jogo jogos[NUM_JOGOS];

    // Preenchimento do vetor
    for(int i = 0; i < NUM_JOGOS; i++) {
        printf("------------------- JOGO %i -------------------\n", i + 1);

        // Ler a data do jogo
        printf("Insira o dia no qual o jogo foi realizado: ");
        scanf("%d", &jogos[i].data.dia);

        printf("Insira o mes no qual o jogo foi realizado (Como numero): ");
        scanf("%d", &jogos[i].data.mes);

        // Ler o nome dos times
        printf("Insira o nome do time mandante: ");
        fflush(stdin);
        scanf("%[^\n]", jogos[i].mandante.nome);

        printf("Insira o nome do time visitante: ");
        fflush(stdin);
        scanf("%[^\n]", jogos[i].visitante.nome);

        // Ler os gols dos times
        printf("Insira o numero de gols do time mandante: ");
        scanf("%d", &jogos[i].mandante.gols);

        printf("Insira o numero de gols do time visitante: ");
        scanf("%d", &jogos[i].visitante.gols);
        puts("");
    }

    // Impressão dos dados inseridos
    for(int i = 0; i < NUM_JOGOS; i++) {
        printf("---------- JOGO %d ----------\n", i + 1);

        // Obter o jogo atual em uma variável (para aumentar a clareza do código)
        jogo jogoAtual = jogos[i];

        // Data do jogo
        printf("Data: %02d/%02d\n", jogoAtual.data.dia, jogoAtual.data.mes);
        
        // Time Mandante
        puts("TIME MANDANTE:");
        printf("\tNome: %s\n", jogoAtual.mandante.nome);
        printf("\tGols: %d\n", jogoAtual.mandante.gols);

        // Time Visitante
        puts("TIME VISITANTE:");
        printf("\tNome: %s\n", jogoAtual.visitante.nome);
        printf("\tGols: %d\n", jogoAtual.visitante.gols);

        // Determinar Vencedor
        if(jogoAtual.mandante.gols > jogoAtual.visitante.gols) { // Mandante venceu
            puts("O time mandante venceu o jogo!");
        }

        else if(jogoAtual.mandante.gols < jogoAtual.visitante.gols) { // Visitante venceu
            puts("O time visitante venceu o jogo");
        }

        else { // Empate
            puts("O jogo resultou em empate.");
        }

        puts("");
    }

    return 0;
}