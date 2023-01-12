/*Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito. Após, calcular e
escrever o saldo atual (saldo atual = saldo - débito + crédito). Também testar se saldo atual for maior
ou igual a zero escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'.*/
#include <stdio.h>

    int main(){

        float nconta, saldo, debito, credito, atual;

            printf("Qual o numero da conta: ");
                scanf("%f", &nconta);

            printf("Qual o salado atual da conta: ");
                scanf("%f", &saldo);

            printf("Qual o valor total recebdio: ");
                scanf("%f", &credito);

            printf("Qual o valor total gasto da conta: ");
                scanf("%f", &debito);

            atual = saldo - debito + credito;

                if(atual >= 0)
                    printf("Saldo POSSITIVO!: R$%.2f", atual);
                    else
                    printf("Saldo NEGATIVO!: R$%.2f", atual);
    }