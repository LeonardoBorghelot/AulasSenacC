#include <stdio.h>

    int main(){

        int a, b, c, d;

            printf("Qual o valor de A: ");
            scanf("%d", &a);

            printf("Qual o valor de B: ");
            scanf("%d", &b);

            printf("Qual o valor de C: ");
            scanf("%d", &c);

            printf("Qual o valor de D: ");
            scanf("%d", &d);

            if (b > c && d > a && (c + d ) > (a + d) && c > d > 0 && a % 2 == 0){
            printf("Valores aceitos");

            }   else{
                printf("Valores nao aceitos");
            }
    }