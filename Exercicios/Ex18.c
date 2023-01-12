/*Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível mostre a mensagem “divisao impossivel” para os valores em
questão.*/

#include <stdio.h>

    int main(){

        float n1, n2, div;

            printf("Digite um valor: ");
                scanf("%f", &n1);

            printf("Digite outro valor: ");
                scanf("%f", &n2);

            div = n1 / n2;
                if(n2 == 0)
                    printf("divisao impossivel");
                else 

                if(div)
                    printf("%.2f", div);
                
    }