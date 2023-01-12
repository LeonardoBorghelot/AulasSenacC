#include <stdio.h>

    int main() {

        int n, m, r;  

            printf("Digite um valor inteiro: ");
            scanf("%d", &n);

            for(m = 0; m <= 10; m ++){
            r = m * n;
                printf("\n%d\n", r);
            }
    }