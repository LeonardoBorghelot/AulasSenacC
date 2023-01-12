/*Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
inclusive N, se for o caso.*/
#include <stdio.h>

    int main(){

        int n, n1, quad;

            printf("Digite um valor inteiro: ");
                scanf("%d", &n);

                    for(n1 = 0; n1 <= n; n1+=2){
                        quad = n1 * n1;
                         printf("O quadrado he:%d\n", quad);
                    }
                   
    }