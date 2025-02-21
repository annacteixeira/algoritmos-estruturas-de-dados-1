#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. 
    Veja o que aconteceu
*/

int main()
{
    int n = 0;

    printf("\nInforme um numero inteiro: ");
    scanf("%d", &n);

    printf("%f", n);
    // imprime 0.00000000
    return 0;
}