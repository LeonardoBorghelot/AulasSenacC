/*Leia o valor de um produto, leia o valor do lucro desejado em percentual. Calcule o valor
do lucro e o valor final do produto. Mostre na tela o valor do produto lido, o percentual lido, o
valor do lucro e o valor final.*/
#include <stdio.h>

    int main(){

        float val, per, porcento, ganho, final;

            printf("Qual o valor do produto? ");
                scanf("%f", &val);
                
                    printf("Qual o lucro desejado em porcentagem: ");
                        scanf("%f", &per);

                            porcento = val * (per / 100);
                                ganho = val - final;
                                    final = val + porcento;

                                        printf("Valor do produto: R$ %.2f \npercentual %.0f porcento \nlucro de R$ %.2f \nvalor final R$ %.2f", val, per, ganho, final);
    }