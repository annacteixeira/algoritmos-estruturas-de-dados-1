#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação 
    científica.
*/

int main()
{
    double n = 0;

    printf("\nInforme um numero real: ");
    scanf("%lf", &n);

    printf("\n%e", n);
    return 0;
}