#include <stdio.h>

float delta(float a, float b, float c){

    return (b * b - 4 * a * c);
}

int main(){

    printf("%.1f\n", delta(1, 2, 3));
    printf("%.1f\n", delta(2, 2, -1));   

    return 0;
}