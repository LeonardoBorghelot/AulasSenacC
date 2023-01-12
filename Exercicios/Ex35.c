/*Implemente um algoritmo que receba a idade de uma pessoa e escreva mensagem de acordo com os critérios:
 Menor de 16 anos ....................: MENOR
 Entre 16 e 17 anos ...................: EMANCIPADO
 Maior de 17 anos.....................: MAIOR*/
 #include <stdio.h>

int main() {

    int idade;

        printf("Qual a sua idade: ");
            scanf("%d", &idade);

            if(idade <= 15){
                printf("Menor");
            }
            else 

            if(idade >= 16 && idade <= 17){
                printf("Emancipado");
            }
            else{
                printf("Maior");
            }
}