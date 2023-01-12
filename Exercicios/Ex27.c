/*Ler dois números inteiros, x e y, e imprimir o quociente e o resto da divisão inteira entre eles.*/
#include <stdio.h>

    int main(){

        int x, y, div, rest;

            printf("Digite um numero: ");
                scanf("%d", &x);

            printf("Digite um numero: ");
                scanf("%d", &x);

            div = x / y;
            rest = x % y;

                printf("Quociente = %d\nResto da divisao = %d", div, rest);
    }