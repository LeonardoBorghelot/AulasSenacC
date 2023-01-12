#include <stdio.h>
    int main(){

            float n1, n2, med;

                printf("Qual foi sua primeira nota? ");
                    scanf("%f", &n1);

                printf("Qual foi sua segunda nota? ");
                    scanf("%f", &n2);

            med = (n1 + n2) / 2;

                printf("Sua media foi %.2f", med);

                if(med <= 5.9)
                    printf("\nAluno reprovado");
                else

                if(med >= 6.0)
                    printf("\nAluno aprovado");
    }