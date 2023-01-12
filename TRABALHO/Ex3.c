/*Leia o valor de um produto, se o valor do produto for menor igual 20 aplicar lucro de
17%, caso esteja entre 21 e igual a 70 aplicar lucro de 15%, caso seja superior aplicar lucro
de 12. Calcule o valor do lucro e o valor final do produto. Mostre na tela o valor do produto
lido, o percentual lido, o valor do lucro e o valor final.*/
#include <stdio.h>

    int main(){

        float prod, lucro, final;

            printf("Digite o valor do produto: ");
                scanf("%f", &prod);

                    if(prod <= 20){
                        final = prod * 0.17;
                        lucro = prod - final;
                            printf("Valor do produto: R$%.2f\nGanho: 17 porcento\nLucro: R$%.2f\nValor final: R$%.2f", prod, prod - lucro , final + prod);
                    }else 
                        if(prod >= 21 && prod <= 70){
                        final = prod * 0.15;
                        lucro = prod - final;
                             printf("Valor do produto: R$%.2f\nGanho: 17 porcento\nLucro: R$%.2f\nValor final: R$%.2f", prod, prod - lucro , final + prod);
                    }else
                        if(prod >= 71){
                        final = prod * 0.12;
                        lucro = prod - final;
                             printf("Valor do produto: R$%.2f\nGanho: 17 porcento\nLucro: R$%.2f\nValor final: R$%.2f", prod, prod - lucro , final + prod);
    }
    }