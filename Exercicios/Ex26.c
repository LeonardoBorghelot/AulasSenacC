/*Escreva um programa que gera números entre 1000 e 1999 e mostra aqueles que divididos por 11 dão resto 5.*/
#include <stdio.h>

    int main(){

        int n = 1000;

            while(n <= 1999 ){
                    if(n % 11 == 5)
                        printf("\n%d", n);
                            n++;
    }
    }