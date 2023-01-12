/*Ler três valores e determinar o maior dentre eles.*/
#include <stdio.h>

    int main(){

        int n = 1, n1, maior;

            while(n <= 3){
                printf("\nInsira um valor: ");
                    scanf("%d", &n1);
                        if(n == 1)
                        maior = n1;
                        else
                        if(n1 > maior)
                            maior = n1;
                            n++;
            }      
                printf("Maior numero: %d", maior);
    }