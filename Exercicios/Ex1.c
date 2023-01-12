#include <stdio.h>

    int main(){

        float elei, vb, vn, val, pvb, pvn, pval;

            printf("Qual foi o nuemro total de eleitores? ");
                scanf("%f", &elei);

            printf("Qual foi o numero de votos em branco? ");
                scanf("%f", &vb);

            printf("Qual foi o numero de voto nulos? ");
                scanf("%f", &vn);

            printf("Qual foi o numero de votos validos? ");
                scanf("%f", &val);

                pvb = 100 / elei * vb; 

                pvn = 100 / elei * vn;

                pval = 100 / elei * val;

            printf("A porcentagem de votos brancos eh: %.0f porcento", pvb);
            printf("\nA porcentagem de votos nuos eh: %.0f porcento" , pvn);
            printf("\nA pocentagem de votos validos eh: %.0f porcento", pval);

    }