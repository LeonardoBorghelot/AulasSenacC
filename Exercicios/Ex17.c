/*- Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão
resto igual a 2.*/

#include <stdio.h>

    int main(){

        int n, n1;

            printf("Digite um numero intero: ");
                scanf("%d", &n);

                    for(n1 = 1; n1 <= 10000; n1 ++){
                        if(n1 % n == 2)
                            printf("%d\n", n1);
                    }
    }