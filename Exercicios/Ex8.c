#include <stdio.h>

    int main(){

        int ano, idade;

            printf("Digite seu ano de nascimento: ");
                scanf("%d", &ano);

                idade = 2022 - ano;

                if(idade <= 15)
                    printf("NAO podera votar.");
                else

                if(idade >= 16)
                    printf("POSSIVEL votar.");
    }