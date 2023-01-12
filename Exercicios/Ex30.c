/*Ler 2 números inteiros do teclado (A e B), verificar e imprimir qual deles é o maior, ou a mensagem “A=B” caso sejam iguais.*/
#include <stdio.h>

    int main(){

        int n1, n2;

            printf("Digite um numero: ");
                scanf("%d", &n1);

            printf("Digite um numero: ");
                scanf("%d", &n2);

            if(n1 > n2){
                printf("Mairo numero: %d", n1);
            }
            if(n2 > n1){
                printf("Maior numero: %d", n2);
            } 
            if(n1 == n2){
                printf("Valores iguais");
            }
    }