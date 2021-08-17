#include <stdio.h>

int main(){

    int inteiros[5];

    for(int i = 0; i < 5; i++)
        scanf(" %d", &inteiros[i]);

    for(int i = 4; i > 0; i--)
        printf("%d ", inteiros[i]);

    printf("%d", inteiros[0]);

    return 0;
}






/*
    VERIFIQUEM A CORREÇÃO AUTOMÁTICA,
    ELA ACUSA ERRO SE O OUTPUT TIVER
    QUALQUER CHAR A MAIS OU A MENOS
    DO QUE O EXEMPLO DO ENUNCIADO.

    NESSE CASO, TENTEM COLOCAR \n NO
    ÚLTIMO printf.
*/
