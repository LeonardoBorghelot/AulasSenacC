#include <stdio.h>

    int main(){

        float sal, comi, comitotal, valor, total;

            printf("Qual foi seu salario no mes? ");
                scanf("%f", &sal);

            printf("Qual foi o total de carros vndidos mesmo mes? ");
                scanf("%f", &comi);
                    comitotal = comi * 150;
                
            printf("Qual foi o valor total de venda nesse mes? ");
                scanf("%f", &valor);
                    total = (valor * 0.05) + sal + comitotal;
            
            printf("Seu salario sera: R$%.2f", total);
    }