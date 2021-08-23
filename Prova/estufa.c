#include <stdio.h>

int aciona_aquecimento(float T){

    if(T < (float) 350)
        return 2;
    else if(T > (float) 650)
            return 0;
        else
            return 1;
}

int main(){

    float t = 400;
    
    int v = aciona_aquecimento(t);

    printf("%d", v);

    return 0;
}