#include <stdio.h>
    int main(){

        float macas;

            printf("Qual eh o numero de macas que vai querer comprar? ");
                scanf("%f", &macas);

                if(macas <= 12)
                    printf("O valor a ser pago vai ser R$%.2f", macas * 1.30);
                else 

                if(macas >= 13)
                    printf("O valor a ser pago vai ser R$%.2f",macas * 1.00);
    }