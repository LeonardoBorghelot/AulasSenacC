#include <stdio.h>
    
    int main(){

        float notas[5] = {7, 7, 9.5, 9.9, 5.2};
            int n;
            
            printf("Exibindo valores das notas:\n\n");

                for(n = 0; n <= 4; n++){  
                    printf("Nota [%d] = %.1f\n", n, notas[n]);}

    }