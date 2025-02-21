#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII
    para isso.
*/

int main()
{
    char maiusculo, minusculo;

    printf("Informe um caractere maiusculo: ");
    maiusculo = getchar();
    fflush(stdin);

    minusculo = maiusculo + 32;

    printf("\nO caractere %c em minusculo eh %c", maiusculo, minusculo);
    return 0;
}
