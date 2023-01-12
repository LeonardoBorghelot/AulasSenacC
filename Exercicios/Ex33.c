/*Imprimir os múltiplos de 7 menores que 200.*/
#include <stdio.h>

int main() {

    int n;
        for(n = 1; n < 200; n++){
            if( n % 7 == 0)
                printf("\n%d",n);
        }
}