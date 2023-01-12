/* Faça um programa que receba uma senha formada de quatro números inteiros, verifique se a
senha está correta e, caso não esteja, solicite novamente a senha. Se a senha entrada for a correta,
deverá ser apresentada a mensagem “Senha Correta”, caso contrário, “Senha Incorreta”*/
#include <stdio.h>

    int main(){

        int senha, senhacor = 2580;

            while(senha!= senhacor){
                printf("Senha: ");
                    scanf("%d", &senha);

                        if(senha != senhacor){
                            printf("Senha incorreta!\n");
                        }
                                else {
                                    printf("Senha correta!");
            }
            }
            
    }