#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares. 
*/

int main()
{
    float valor_reais = 0, cotacao_dolar = 0;

    printf("\nInforme o valor em reais: ");
    scanf("%f", &valor_reais);

    printf("\nInforme a cotacao do dolar: ");
    scanf("%f", &cotacao_dolar);

    printf("%R$ %.2f = USD$ %.2f", valor_reais, valor_reais * cotacao_dolar);
    return 0;
}