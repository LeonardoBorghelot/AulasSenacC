#include <stdio.h>

    int main(){

        float n1, n2, n3, n4, dif; 

            printf("Qual o primeiro valor? ");
            scanf("%f", &n1);

            printf("Qual o segundo valor? ");
            scanf("%f", &n2);

            printf("Qual o terceiro valor? ");
            scanf("%f", &n3);

            printf("Qual o quarto valor? ");
            scanf("%f" , &n4);

            dif = (n1 * n2 - n3 * n4);

            printf("A diferenca e = %.2f", dif);

    }