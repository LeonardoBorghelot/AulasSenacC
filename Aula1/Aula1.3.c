#include <stdio.h>
#include <math.h>

    int main(){

        float area, raio, pi = 3.14159;

        printf("Qual o raio? ");
        scanf("%f" , &raio);

        area = pi * pow(raio, 2.0);

        printf("A area do circulo e = %.4f", area);

    }