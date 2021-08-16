// #include <stdio.h>

float media(int inteiros[], int n_elementos){

    int somatorio = 0;
    
    for(int i = 0; i < n_elementos; i++)
        somatorio += inteiros[i];

    return (float) somatorio / n_elementos;
}

/*QUESTÃO PEDE FUNÇÃO SÓ A FUNÇÃO
 MÉDIA, IGNORAR A MAIN E O INCLUDE
 *
 *
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */
// int main(){

//     int teste[] = {4, 8};

//     printf("%f\n", media(teste, 2));

//     return 0;
// }