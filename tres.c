#include <stdio.h>

int main(){

    float salario = 0;

    scanf(" %f", &salario);

    if(salario > (float) 3000)
        printf("R$ %.2f\n", salario * 0.12);
    else
        if(salario > (float) 1500)
            printf("R$ %.2f\n", salario * 0.1);
        else
            printf("R$ 0.00\n");

    return 0;
}