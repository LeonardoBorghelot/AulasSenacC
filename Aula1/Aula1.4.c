#include <stdio.h>
#include <math.h>

    int main(){
            
            float volume, raio, pi = 3.14159;

            printf("Qual o raio da esfera? ");
            scanf("%f" , &raio);

            volume = (4/3) * pi * (raio * raio *raio);

            printf("O volume da esfera e = %.4f",volume );
            
    }