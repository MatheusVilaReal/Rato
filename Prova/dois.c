#include <stdio.h>

int main(){

    int array[5];

    for(int i = 0; i < 5; i++)
        scanf(" %d", &array[i]);

    for(int i = 0; i < 4; i++)
        if(!(array[i] % 3))
            printf("%d ", array[i]);

    if(!(array[4] % 3))
        printf("%d", array[4]);

    return 0;
}