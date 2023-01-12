/*Faça um programa que leia número reais maiores que zero. Quando for entrado o número zero,
o programa deverá apresentar quantos números foram entrados e a média destes.*/

#include <stdio.h>

    int main(){

        int n1, med, cont=0, soma=0;

                    while (n1 > 0){
                        printf("\nDigite um valor: ");
                        scanf("%d", &n1);
                    
                            soma = n1 + soma;
                    
                        if (n1 != 0)
                            cont++;                                                    
                    }
                    
                            med=soma/cont;
                        printf("Foram entrados: %dnumeros\n", cont);
                        printf("A media eh = %d",med);


    }