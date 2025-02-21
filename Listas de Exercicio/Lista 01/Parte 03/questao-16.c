#include <stdio.h>
#include <stdlib.h>

/*
    Faça  um  programa  que  leia  um  valor  do  tipo  float  e  depois  o  imprima  usando  o  operador 
    “%d”. Veja o que aconteceu
*/


int main()
{
    float n = 0;

    printf("\nInforme um numero real: ");
    scanf("%f", &n);

    printf("\n%d", n);
    // imprime 0
    return 0;
}