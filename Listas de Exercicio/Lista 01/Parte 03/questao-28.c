#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia um número real e imprima a quinta parte desse número.
*/


int main()
{
    float n = 0;

    printf("\nInforme um numero real: ");
    scanf("%f", &n);

    printf("%f", n / 5.0);
    return 0;
}