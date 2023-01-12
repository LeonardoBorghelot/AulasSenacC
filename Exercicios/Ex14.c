/*Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos
(desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.*/

#include <stdio.h>

    int main(){

        int n, n1;

            for(n = 1; n <= 6; n++){
                printf("\nDigite um valor: ");
                    scanf("%d", &n1);
                        n1++;
              }  
                            if(n1 >= 0)
                                    printf("Possitivos: %d", n1);
            
    }