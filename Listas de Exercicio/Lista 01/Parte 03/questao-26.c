#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três 
    maneiras  diferentes: separadas  por  espaços,  por  uma  tabulação  horizontal  e  uma  em  cada 
    linha. Use um único comando printf() para cada operação de escrita das três variáveis.
*/

int main()
{
    char c;
    int n = 0;
    float f = 0;

    printf("\nInforme um caractere: ");
    c = getchar();
    fflush(stdin);

    printf("\nInforme um numero inteiro: ");
    scanf("%d", &n);
    fflush(stdin);

    printf("\nInforme um numero real: ");
    scanf("%f", &f);
    fflush(stdin);

    printf("\n%c %d %f\n", c, n, f);
    printf("\n\t%c\t%d\t%f\n", c, n, f);
    printf("\n%c\n%d\n%f\n", c, n, f);
    return 0;
}