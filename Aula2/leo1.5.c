#include <stdio.h>

    int main() {

        float n1, n2, n3, n4, m;

        printf("Qual foi sua primeira nota? ");
        scanf("%f", &n1);

        printf("Qual foi sua segunda nota? ");
        scanf("%f", &n3);

        printf("Qual foi sua terceira nota? ");
        scanf("%f", &n3);

        printf("Qual foi sua quarta nota? ");
        scanf("%f", &n4);

            m = (n1 + n2 + n3 + n4) / 4;

            if (m >= 7.0)
                printf("Aluno aprovado");
            else 
                
            if (m <= 4.9)
                printf("Aluno reprovado");
            else

            if(m <= 5.0 && m <= 6.9)
                printf("Aluno em exame");
        
    }