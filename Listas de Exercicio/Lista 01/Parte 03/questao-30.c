#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do 
    ano atual.
*/

int main()
{
    int ano_nascimento = 0, ano_atual = 0, idade = 0;

    printf("\nQual eh a sua idade? ");
    scanf("%d", &idade);

    printf("\nQual eh o ano atual? ");
    scanf("%d", &ano_atual);

    ano_nascimento = ano_atual - idade;

    printf("\nSeu ano de nascimento eh: %d\n", ano_nascimento);
    return 0;
}