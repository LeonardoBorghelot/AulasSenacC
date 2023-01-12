/*Ler um nome do teclado e ver se é igual ao seu nome. Imprimir conforme o caso: “NOME CORRETO” ou “NOME INCORRETO”.*/
#include <stdio.h>

    int main(){
        
        char n[250], nome[] = "leonardo";

            printf("Digite um nome: ");
                scanf("%s", &n);

                    if((strcmp( n, nome)) == 0){
                        printf("Nome CORRETO!");
                            
        }
        else{
            printf("Nome INCORRETO");
        }
    }