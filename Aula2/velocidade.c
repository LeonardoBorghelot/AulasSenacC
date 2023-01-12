#include <stdio.h>

    int main (){

            float maxima, minha, multa, dif;

                printf("Qual a velocide maxima permitida? ");
                    scanf("%f", &maxima);

                printf("Qual foi a valocide que o motorista estava dirigindo? ");
                    scanf("%f", &minha);
                
                dif = maxima - minha; 

                if(dif <= 10)
                    printf("Multa de R$50.00");
                else if (dif <= 11 && dif <=30)
                    printf("Multa de R$100.00");
                else if (dif >= 31)
                    printf("Multa de R$200.00");
                else
                    printf("Voce esta na velocidade da via.");
    }