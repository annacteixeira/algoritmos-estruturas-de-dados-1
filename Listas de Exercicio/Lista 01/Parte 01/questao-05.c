#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    Implemente um programa que o usuário informa o valor a ser investido, uma taxa de juros 
    mensal a ser aplicada ao capital, e o número de meses que irá durar a aplicação. Ao final o 
    programa deverá mostrar: 
        • O valor total acumulado ao final período. 
        • O valor de juros rendidos.
*/
int main()
{
    float montante = 0, capital_aplicado = 0, taxa_juros = 0, juros_rendido = 0;
    int duracao = 0;

    printf("\nInforme o valor a ser investido: ");
    scanf("%f", &capital_aplicado);

    printf("\nInforme a taxa de juros, exemplo: 5 para 5 porcento: ");
    scanf("%f", &taxa_juros);

    printf("\nInforme a duracao do investimento em meses: ");
    scanf("%d", &duracao);


    taxa_juros = taxa_juros / 100.0;
    montante = capital_aplicado * pow(1 + taxa_juros, duracao);
    juros_rendido = montante - capital_aplicado;

    printf("\nO valor total acumulado ao final do periodo de %d meses eh: %.2f", duracao, montante);
    printf("\nO valor de juros rendidos eh: %.2f\n", juros_rendido);


    return 0;
}