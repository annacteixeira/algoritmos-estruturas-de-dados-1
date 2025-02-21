#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que leia um número inteiro e depois imprima a mensagem “Valor lido:”, 
    seguido do valor inteiro. Use apenas um comando printf().
*/

int main()
{
    int n = 0;

    printf("\nInforme um numero inteiro: ");
    scanf("%d", &n);

    printf("\nValor lido: %d\n", n);
    return 0;
}