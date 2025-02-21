#include <stdio.h>
#include <stdlib.h>

/*
    Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.
*/

int main()
{
    char c;

    printf("\nInforme um caractere: ");
    scanf("%c", &c);

    printf("%d", c);
    //Imprime o valor do caractere na tabela ASCII
    return 0;
}