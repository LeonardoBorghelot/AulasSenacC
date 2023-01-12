/*Ler 4 números inteiros e calcular a soma dos que forem par.*/
#include <stdio.h>

    int main(){
        
        int n, num, soma = 0 ;

           for(n = 1; n <=4; n++){
                printf("\nDigite um valor: ");
                    scanf("%d", &num);

                        if(num % 2 == 0)
                            soma = soma + num;
           }
                            printf("Soma dos numeos pares = %d", soma);
    }