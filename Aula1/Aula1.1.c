    #include <stdio.h>

    int main(){

            float n1, n2, n3, n4, med;

                printf("Qual foi sua primeira nota? ");
                scanf("%f", &n1);
    
                printf("Qual foi sua segunda nota? ");
                scanf("%f", &n2);

                printf("Qual foi sua terceira nota? ");
                scanf("%f", &n3);
            
                printf("Qual foi sua quarta nota? ");
                scanf("%f", &n4);
            
            
                med = (n1 + n2 + n3 + n4) / 4;

                printf("Sua media foi: %.2f", med);

    }