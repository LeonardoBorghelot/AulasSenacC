/*Ler 10 valores, um de cada vez, e contar quantos deles estão no intervalo [10,50] 
e quantos deles estão fora deste intervalo, mostrando estas informações.*/
#include <stdio.h>

    int main(){

        int n, num, cont1 = 0, cont2 = 0;

            for(n = 1; n <=10; n++){
                printf("Digite os valores: ");
                    scanf("%d", &num);
            if(num >= 10 && num <= 50)
                cont1++;
            else
            cont2++;
            }

printf("%d estao dentro do intervalo [10, 50]", cont1);
printf("\n%d estao fora do intervalo [10, 50]", cont2);
    }
