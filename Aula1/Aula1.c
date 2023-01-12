    #include <stdio.h>

    int main(){
    
            int n1, n2, soma, sub, mult, div;


                printf("Digite um numero: ");
                scanf("%d", &n1);

                printf("Digite outro numero: ");
                scanf("%d", &n2);

                soma = n1 + n2;
                sub = n1 - n2;
                mult = n1 * n2;
                div = n1 / n2;

                printf("\nA soma de %d +  %d = %d", n1, n2, soma);
                printf("\nA subtracao de %d - %d = %d" , n1, n2, sub);
                printf("\nA multiplicacao de %d * %d  = %d" , n1, n2, mult);
                printf("\nA divisao de %d / %d  = %d" , n1, n2,  div);
                
    }