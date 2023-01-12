#include <stdio.h>
    int main(){

        float n1, n2, n3, med; 

            printf("Qual foi sua primeira nota? ");
                scanf("%f", &n1);
             
            printf("Qual foi sua segunda nota? ");
                scanf("%f", &n2);

            printf("Qual foi sua terceira nota? ");
                scanf("%f", &n3);

                    med = ((n1 * 2) + (n2 * 3) + (n3 * 5)) /10;

            printf("Sua media final foi: %.2f", med);  
    }