/*Calcular e mostrar a média aritmética dos números pares compreendidos entre 13 e 73.*/
#include <stdio.h>

    int main(){

        int n, par=0 , med, cont=0;

             for(n = 13; n <=73; n++){
                if(n % 2 == 0){
                    cont++;
                    par  = par + n;
                }  
    }
                         med = par / cont;
                        printf("\n%d", med);   
    }