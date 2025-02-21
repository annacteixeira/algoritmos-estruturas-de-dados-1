#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia três valores inteiros e mostre sua soma. 
*/

int main()
{
    int n1 = 0, n2 = 0, n3 = 0;

    printf("\nInforme o primeiro valor inteiro: ");
    scanf("%d", &n1);

    printf("\nInforme o segundo valor inteiro: ");
    scanf("%d", &n2);

    printf("\nInforme o primeiro valor inteiro: ");
    scanf("%d", &n3);

    printf("\nSoma = %d", n1 + n2 + n3);
    return 0;
}