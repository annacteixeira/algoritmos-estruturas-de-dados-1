#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em 
    que eles foram lidos.
*/

int main()
{
    int n1 = 0, n2 = 0;

    printf("\nInforme o primeiro numero: ");
    scanf("%d", &n1);

    printf("\nInforme o segundo numero: ");
    scanf("%d", &n2);

    printf("\n%d\n%d\n", n2, n1);
    return 0;
}