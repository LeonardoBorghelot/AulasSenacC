#include <stdio.h>

    int main(){

        char nome[10];
        float sal, vend, comi = 0.15, total;

            printf("Qual o seu nome? ");
            scanf("%s", &nome);

            printf("Qual é o seu salario mensal? ");
            scanf("%f", &sal);

            printf("Qual foi o valor em vendas nesse mes(em dinheiro)? ");
            scanf("%f", &vend);

            total = (vend * comi) + sal;

            printf("O seu salario sera: R$%.2f", total);

    }