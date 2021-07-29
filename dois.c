#include <stdio.h>

int main(){

    int inteiro = 0, maior = 0, qtd = 0;

    scanf(" %d", &inteiro);

    while(inteiro >= 0){

        if(inteiro > maior)
            maior = inteiro;

        ++qtd;

        scanf(" %d", &inteiro);
    }

    printf("%d %d\n", maior, qtd);

    return 0;
}