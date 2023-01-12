/*Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se
que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que
ultrapassar este valor, calcular e escrever o seu salário total.*/

#include <stdio.h>

    int main (){

        float sal, vend, comi3, comi5, total;

            printf("Qual o seu salario? ");
                scanf("%f", &sal);

            printf("Qual foi seu total de venda: R$");
                scanf("%f", &vend);

                comi3 = vend * 0.03;
                comi5 = vend * 0.05;
                
                if(vend <= 1500)
                    printf("Seu salario sera: R$%.2f", sal + comi3);
                        
                else 
                    if(vend >= 1501)
                    printf("Seu salario sera: R$%.2f", sal + comi5);
    }