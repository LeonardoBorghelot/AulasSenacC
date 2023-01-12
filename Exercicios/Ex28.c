/*Para ler 3 números reais do teclado e verificar se o primeiro é maior que a soma dos outros dois.*/
#include <stdio.h>

    int main(){
        
        int n1, n2, n3;

            printf("Digite um numero: ");
                scanf("%d", &n1);

            printf("Digite um numero: ");
                scanf("%d", &n2);

            printf("Digite um numero: ");
                scanf("%d", &n3);

                if(n1 > n2 + n2){
                    printf("O primeiro numero eh maior que a soma do segundo e terceiro numero.");
                } else{
                printf("a soma do segundo e o terceiro numero eh maior que o primeiro numero.");}   
    }