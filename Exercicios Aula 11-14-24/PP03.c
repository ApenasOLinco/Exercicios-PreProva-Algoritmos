/*
    Suponha que um banco permita no máximo 5 transações enviadas por PIX em um dia. Construa um
    programa que receba do teclado o saldo disponível na conta do cliente. Em seguida, cadastre os
    dados de cada um dos 5 PIX enviados (chave e valor). A cada PIX cadastrado, apresente o saldo
    atual da conta do cliente. Caso o cliente não tenha dinheiro suficiente para enviar o PIX, exiba uma
    mensagem de erro e não faça a transação. Ao final, imprima os dados das transações e o saldo da
    conta do cliente.
*/

#include <stdio.h>
#include <stdbool.h>

// Defines
#define MAX_TRANSACOES 1

// Structs
typedef struct {
    char chave[100];
    double valor;
} pix;

typedef struct {
    double saldo;
    unsigned short pixEnviados;
    pix pixDados[5];
} contaCliente;

// Protótipos

/**
 * Envia a transação especificada.
 * 
 * @param contaCliente a conta do cliente que está enviando o pix
 * @param pixAEnviar o pix a ser enviado
 * 
 * @return True, se a transação for bem-sucedida; False, caso contrário.
 */
bool enviarTransacao(contaCliente* conta, pix* pixAEnviar);

int main() {
    contaCliente conta;
    conta.pixEnviados = 0;

    // Ler o saldo da conta
    printf("Insira o saldo da conta do cliente: ");
    scanf("%lf", &conta.saldo);

    for(; conta.pixEnviados < MAX_TRANSACOES; conta.pixEnviados++) {
        if(conta.saldo <= 0) {
            fprintf(
                stderr,
                "Saldo da conta chegou a zero antes do termino das transacoes. Encerrando programa na transacao %d.\n",
                conta.pixEnviados + 1
            );

            break;
        }

        // Tenta enviar a transação até que ela dê certo
        while(!enviarTransacao(&conta, &conta.pixDados[conta.pixEnviados]));
    }

    // Imprimir o número de pixes enviados
    if(conta.pixEnviados == 0) {
        printf("Nao foram enviados pixes durante a execucao desse programa.\n");
        return 0;
    }
    
    printf("Foram enviados %d pixes durante a execucao desse programa.\n", conta.pixEnviados);

    // Imprimir os dados dos pixes enviados
    for(int i = 0; i < conta.pixEnviados; i++) {
        printf("\n----------- PIX %d -----------\n", i + 1);
        printf("Valor: R$%.2f\n", conta.pixDados[i].valor);
        printf("Chave: %s\n", conta.pixDados[i].chave);
        puts("");
    }

    // Imprimir o saldo final da conta
    printf("Saldo final da conta do cliente: %.2f", conta.saldo);    

    return 0;
}

bool enviarTransacao(contaCliente* conta, pix* pixAEnviar) {
    printf("Transacao numero %d\n", conta->pixEnviados + 1);    
    printf("Saldo da conta: R$%.2f\n", conta->saldo);

    printf("Insira o valor do pix a ser enviado: ");
    scanf("%lf", &pixAEnviar->valor);

    if(pixAEnviar->valor > conta->saldo) {
        fprintf(
            stderr,
            "Nao foi possivel fazer o envio do pix: valor do pix excede saldo da conta.\
            \n\tValor pix: R$%.2f\
            \n\tSaldo da conta: R$%.2f\n",
            pixAEnviar->valor,
            conta->saldo
        );

        return false;
    }

    printf("Insira a chave pix a receber o envio: ");
    fflush(stdin);
    scanf("%s", pixAEnviar->chave);

    // Retira da conta o valor do pix
    conta->saldo -= pixAEnviar->valor;
    puts("Pix enviado!");

    return true;
}