/*- Leia o valor de um produto, se o valor do produto for igual ou superior a 50 aplicar lucro
de 15%, caso seja menor aplicar lucro de 20%. Calcule o valor do lucro e o valor final do
produto. Mostre na tela o valor do produto lido, o percentual lido, o valor do lucro e o valor
final.*/
#include <stdio.h>

    int main(){

        float prod, lucro, final;

            printf("Digite o valor do produto: ");
                scanf("%f", &prod);
                        

                    if(prod >= 50){
                        final = prod * 0.15;
                        lucro = prod - final;
                        printf("Valor do produto: R$%.2f\nGanho: 17 porcento\nLucro: R$%.2f\nValor final: R$%.2f", prod, prod - lucro , final + prod);
                        
                    }else 
                    
                        if(prod <= 49){
                        final = prod * 0.17;
                        lucro = prod - final;
                        printf("Valor do produto: R$%.2f\nGanho: 17 porcento\nLucro: R$%.2f\nValor final: R$%.2f", prod, prod - lucro , final + prod);
                    }
    }