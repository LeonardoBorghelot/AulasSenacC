/*15 - Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares
e mostre esta informação.*/
#include <stdio.h>  
    
    int main(){

        int n , n1, cont = 0;

            for(n = 1; n <= 5; n++){
                printf("\nDigite um valor: ");
                    scanf("%d", &n1);
                       
            
                            if(n1 % 2 == 0)
                                cont ++;}
                                    printf("Pares: %d", cont);
    }