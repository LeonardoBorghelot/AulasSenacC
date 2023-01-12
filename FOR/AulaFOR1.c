#include <stdio.h>

    int main() {
    
        
        float n, aluno, med, n1, n2, n3;

            printf("Digite uma quantidade de aluno: ");
                scanf("%f", &aluno); //3

            for (n = 0; n < aluno; n ++) {
            
            printf("Qual a primeira nota? ");
                scanf("%f",&n1);

            printf("Qual a segunda nota? ");
                scanf("%f",&n2);

            printf("Qual a terceira nota? ");
                scanf("%f",&n3);

            med = (n1 *2 + n2 * 3 + n3 * 5) /10;    
    
            printf("\nMedia = %.1f\n",med);
    }
    }
    