/*Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos.
Calcular a média da turma e contar quantos alunos obtiveram nota acima desta média
calculada. Escrever a média da turma e o resultado da contagem*/
#include <stdio.h>

    int main(){

        float vetor[20];
        float soma, media;
        int i, cont;
        soma = 0;

        for(i = 0; i <= 20; i++){
            printf("Digite a nota do [%d] aluno: ", i, vetor);
                scanf("%f", &vetor[i]);
                soma = soma + vetor[i];
        }
            media = soma / 20;
            cont = 0;

                for(i = 0; i <= 20; i++){
                    if(vetor[i] > media)
                    cont = cont + 1;
                }
                        printf("Media da turma = %.2f", media);
                            printf("Alunos acima da media: %d", cont);
    }