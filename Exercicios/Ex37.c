/*Em uma loja de DVD ́s, os vendedores que venderem mais de 100 DVD ́s por mês, tem um
acréscimo de 10% sobre o salário, faça um algoritmo que escreva o nome, o salário final e a
quantidade de DVD ́s vendidos por um vendedor. Nota: O salário de um vendedor é dois salários
mínimos.*/
#include <stdio.h>

    int main() {

        float sal = 2424.00, dvd;
        char nome;
            printf("Qual o seu nome? ");
                scanf("%s", &nome);

            printf("Qual foi a venda de DVD s esse mes? ");
                scanf("%f", &dvd);

                if(dvd >= 100){
                    printf("Salario final: R$%.2f\nDVDs vendidos:%.0f un", (sal * 0.10) + sal, dvd);
                }else
                    printf("Salario final: R$%.2f\nDVDs vendidos:%.0f un", sal, dvd);
    }