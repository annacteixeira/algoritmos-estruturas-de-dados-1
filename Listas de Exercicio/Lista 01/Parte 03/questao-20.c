#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para 
    isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.
*/

int main()
{
    float n1 = 0, n2 = 0;

    printf("\nInforme dois valores reais: ");
    scanf("%f %f", &n1, &n2);

    printf("\n%.2f\n%.2f\n", n2, n1);
    return 0;
}