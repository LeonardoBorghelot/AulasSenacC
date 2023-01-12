/*Prepare um algoritmo que leia o sexo, a altura e o peso real de uma pessoa. Este algoritmo deve
escrever uma das seguintes mensagens:
a) “Excesso de fofura!”: caso o peso ideal da pessoa seja menor que seu peso real;
b) “No ponto certo!”: caso o peso ideal da pessoa seja igual ao seu peso real;
c) “Precisa ficar fofo!”: caso o peso ideal da pessoa seja maior que seu peso real.
Lembre-se que:
Para mulheres, a fórmula para o cálculo do peso ideal é: 62,1 * Altura – 44,7;
Para homens, a fórmula é: 72,7 * Altura – 58.*/
#include <stdio.h>

    int main() {

        char sexo;
        float alt, peso, imc;

            printf("Qual o seu sexo? ");
                scanf("%s", &sexo);

            printf("Qual a sua altura? ");
                scanf("%f", &alt);

            printf("Qual o seu peso? ");
                scanf("%f", &peso);
            
            imc = peso / (alt * alt);

                if(imc < 15){
                    printf("Magreza grave");
                }else if(imc <= 16 && imc <= 17){
                    printf("Magreza moderada");
                }else  if(imc <= 17.1 && imc <= 18.5){
                    printf("Magreza leve");
                }else if(imc <= 18.6 && imc <= 25){
                    printf("Saudavel");
                }else if(imc <= 25.1 && imc <= 30){
                    printf("Sobrepeso");
                }else if(imc <= 30.1 && imc <= 35){
                    printf("Obsidade grau I");
                }else if(imc <= 35.1 && imc <= 40){
                    printf("Obsidade grau II (severa)");
                }else if(imc <= 40){
                    printf("Obsidade grau III (morbida)");
                }
    
    
    }