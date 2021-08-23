#include <stdio.h>

float dias_bons(float temperaturas[], int n_dias){

    int dias_bons = 0;

    for(int i = 0; i < n_dias; i++)
        if(temperaturas[i] >= 12 && temperaturas[i] <= 27)
            ++dias_bons;

    return (float) dias_bons / n_dias;
}

/*
 *   O EXERCÍCIO PEDE SOMENTE A FUNÇÃO
 */

int main(){

    float t[] = {0, 14, 20, 35};

    float p = dias_bons(t, 4);

    printf("%.2f", p);

    return 0;
}