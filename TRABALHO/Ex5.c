/*Leia o valor de um produto, se o valor do produto for menor igual 20 aplicar lucro de
17%, caso esteja entre 21 e igual a 70 aplicar lucro de 15%, caso seja superior a 70 e até
100 aplicar lucro de 12. Em caso de superior a 100 solicitar o valor do lucro. Calcule o valor
do lucro e o valor final do produto. Mostre na tela o valor do produto lido, o percentual lido, o
valor do lucro e o valor final. Faça o procedimento enquanto o valor do produto lido for
superior a 0. Informe a quantidade de produtos lidos.*/
#include <stdio.h>

    int main(){

        float prod, lucro, final, porc, soma, cont;
        
            while(prod){
                soma = soma + prod;
                cont++;

            printf("\nDigite o valor do produto: ");
                scanf("%f", &prod);
    
                    if(prod >= 1 && prod <= 20){
                        final = prod * 0.17;
                        lucro = prod - final;
                            printf("Valor do produto: R$%.2f\nGanho: 17 porcento\nValor do lucro: R$%.2f\nValor final: R$%.2f", prod, prod - lucro , final + prod);
                    }else 
                        if(prod >= 21 && prod <= 70){
                        final = prod * 0.15;
                        lucro = prod - final;
                            printf("Valor do produto: R$%.2f\nGanho: 15 porcento\nValor do lucro: R$%.2f\nValor final: R$%.2f", prod, prod - lucro , final + prod);
                    }else
                        if(prod >= 71 && prod <= 100){
                        final = prod * 0.12;
                        lucro = prod - final;
                            printf("Valor do produto: R$%.2f\nGanho: 12 porcento\nValor do lucro: R$%.2f\nValor final: R$%.2f", prod, prod - lucro , final + prod);
                    }else 
                        if(prod >= 101){
                            printf("Qual a porcentagem que deseja ganhar de lucro?");
                                scanf("%f", &porc);
                            final = prod * (porc / 100);
                        lucro = prod - final;
                            printf("Valor do produto: R$%.2f\nGanho: %.0f porcento\nValor do lucro: R$%.2f\nValor final: R$%.2f", prod, porc, prod - final , final + prod);
                        }else
                        if(prod <= 0){
                            printf("%.0f", cont - 1);
                        }
                    }
    }