/*Ler um número e escreva se ele "é primo" ou "não é primo".*/
#include <stdio.h>

int main() {

    int n;

        printf("Digite um numero: ");
            scanf("%d", &n);

                if(n % 2 == 0 && n != 2){
                    printf("Nao primo");
                } else{
                    printf("Primo");
                }
}