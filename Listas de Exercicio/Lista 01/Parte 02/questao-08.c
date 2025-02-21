#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    Implemente um algoritmo que receba a altura e peso de uma pessoa e calcule e o seu Índice 
    de Massa Corporal (IMC).
*/

int main()
{
    float altura = 0, peso = 0, imc = 0;

    printf("\nInforme sua altura em metros: ");
    scanf("%f", &altura);

    printf("\nInforme seu peso em kg: ");
    scanf("%f", &peso);

    imc = peso / pow(altura, 2);

    printf("\nSeu IMC eh: %.2f\n", imc);

    return 0;
}