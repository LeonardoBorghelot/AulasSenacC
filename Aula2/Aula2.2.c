#include <stdio.h>

    int main(){

        float cod1, cod2, num1 = 15, num2 = 22, valor1 = 79.99, valor2 = 50;

        printf("Qual o codigo da peça 1? ");
        scanf("%f", &cod1);

        printf("\nPeça 1 tem %.2f em estoque. Que custam R$%.2f un. Todas as pecas custam: R$%.2f", num1, valor1, num1*valor1 );

        printf("\nQual o codigo da peca 2?");
        scanf("%f", &cod2);

        printf("\nPeca 2 tem %.2f em estoque. Que custam R$%.2f un. Todas as pecas custam: R$%.2f", num2, valor2, num2*valor2);

        printf("\nA soma de ambas as pecas é: R$%.2f", num1*valor1+num2*valor2);
    }