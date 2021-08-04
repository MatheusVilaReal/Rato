#include <stdio.h>

int par_impar(int inteiro){

    return inteiro % 2;
}

// int par_impar(int inteiro){

//     return inteiro & 1;
// }

int main(){

    printf("%d\n", par_impar(2));
    printf("%d\n", par_impar(3));

    return 0;
}