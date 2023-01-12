#include <stdio.h>

    int main (){

        int num = 1, tab;

            printf("Digite um numero que deseja saber a tabuada? ");
                scanf("%d", &tab);
                    
                    while(num <= 10){
            printf("\n %d X %d = %d", tab, num, tab * num);
            num ++;
            }
}