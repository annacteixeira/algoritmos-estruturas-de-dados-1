#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    Escreva  um  programa  que  receba  2  pontos  cartesianos  (x,  y)  e  calcule  a  distância  Euclidiana 
    entre eles
*/

int main()
{
    float x1 = 0, x2 = 0, y1 = 0, y2 = 0, distancia_euclidiana = 0;

    printf("\nInforme o ponto x1: ");
    scanf("%f", &x1);

    printf("\nInforme o ponto x2: ");
    scanf("%f", &x2);

    printf("\nInforme o ponto y1: ");
    scanf("%f", &y1);

    printf("\nInforme o ponto y2: ");
    scanf("%f", &y2);

    distancia_euclidiana = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\nA distancia euclidiana eh: %.2f\n", distancia_euclidiana);
    return 0;
}