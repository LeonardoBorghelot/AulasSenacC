#include <stdio.h>

    int main (){
        
        int op;

            do{
                printf("Escolha 1 ou 0: ");
                scanf("%d", &op);
            } while (op != 0 && op != 1);
                printf("Voce escolheu: %d", op);
    }