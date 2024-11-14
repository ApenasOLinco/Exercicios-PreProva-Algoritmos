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

// Structs
typedef struct {
    int dia;
    int mes;
} data;

typedef struct {
    char mandante[100], visitante[100];
    int golsMandante, golsVisitante;
    data data;
} jogo;

// Protótipos

int main() {
    

    return 0;
}