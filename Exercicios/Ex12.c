/*- Faça um algoritmo para ler: quantidade atual em estoque, quantidade máxima em estoque e
quantidade mínima em estoque de um produto. Calcular e escrever a quantidade média ((quantidade
média = quantidade máxima + quantidade mínima)/2). Se a quantidade em estoque for maior ou igual
a quantidade média, escrever a mensagem 'Não efetuar compra', senão escrever a mensagem
'Efetuar compra'.*/
#include <stdio.h>

    int main(){

        float esto , estomax, estomin, med;

            printf("Qual a qauntidade em estoque: ");
                scanf("%f", &esto);

            printf("Qual a quantidade minima do produto? ");
                scanf("%f", &estomin);
                
            printf("Qual aquantidade maxima do produto? ");
                scanf("%f", &estomax);

                med = (estomin + estomax) /2;

            if(esto >= med)
                printf("Efetuar compra!");
                    else("Nao efetuar compra!");
    }