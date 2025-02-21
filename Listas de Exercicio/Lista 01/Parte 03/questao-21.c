#include <stdio.h>
#include <stdlib.h>

/*
    Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). 
    Em seguida, imprima os valores lidos separados por uma barra (\).
*/

int main()
{
    int dia = 0, mes = 0, ano = 0;

    printf("\nInforme o dia: ");
    scanf("%d", &dia);

    printf("\nInforme o mes: ");
    scanf("%d", &mes);

    printf("\nInforme o ano: ");
    scanf("%d", &ano);

    printf("\n%d/%d/%d\n", dia, mes, ano);
    return 0;
}