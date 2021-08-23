#include <stdio.h>

int resfria_motor(float temperatura){

    if(temperatura < (float) 35)
        return 0;
    else if(temperatura > 65)
            return 2;
        else
            return 1;
}

/*
 *   O EXERCÍCIO PEDE SOMENTE A FUNÇÃO
 */

int main(){

    float t = 66;

    int v = resfria_motor(t);

    printf("%d", v);

    return 0;
}