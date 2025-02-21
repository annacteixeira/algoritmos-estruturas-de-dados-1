#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. 
    Use um único comando printf() para isso. 
*/

int main()
{
    char c1, c2, c3;

    printf("\nInforme o primeiro caractere: ");
    c1 = getchar();
    fflush(stdin);

    printf("\nInforme o segundo caractere: ");
    c2 = getchar();
    fflush(stdin);

    printf("\nInforme o terceiro caractere: ");
    c3 = getchar();

    printf("\n%c\n%c\n%c", c1, c2, c3);
    return 0;
}