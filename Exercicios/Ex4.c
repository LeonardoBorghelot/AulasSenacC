#include <stdio.h>
    
    int main(){

        int num;

            printf("Digite um numero: ");
                scanf("%d", &num);

            if(num <= 9)
                printf("eh MENOR que 10!");
            
            if(num >= 11)
                printf("eh MEIOR que 10!");
            
            if(num == 10)
                printf("eh IGUAL a 10!");
    }   