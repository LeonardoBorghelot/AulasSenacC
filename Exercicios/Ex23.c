/*Calcular a média de idade de uma turma qualquer.*/
#include <stdio.h>

    int main(){

        int n, idade, med, cont = 0;

            for(n = 1; n <=5; n++){
                printf("Digite a idade de 5 alunos: ")/
                    scanf("%d", &idade);
                        cont = cont + idade;
                        med = cont / 5;
            }
                printf("A media de idade da turma he = %d ",med);
    }