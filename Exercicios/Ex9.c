/*A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais
de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%.
Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e
escreva o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido
trabalhadas (considere que o mês possua 4 semanas exatas).*/
#include <stdio.h>

    int main(){

        float horas, valorh, extra, sal, valhoraex;

            printf("Qual foi o numero de total de horas mensais trabalhadas? ");
                scanf("%f", &horas);

            printf("Qual eh o valor que voce recebe por hora? ");
                scanf("%f", &valorh);
            
            sal = horas * valorh;
           
            if(horas <= 160)
                printf("Seu salario sera: R$%.2f ", sal);
            else if(horas >= 161)
                valhoraex = horas-160;
                extra = valhoraex * valorh * 1.5;
                printf("Seu salario com as horas extras sera: R$%.2f", extra + sal);
    }