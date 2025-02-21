#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    Sejam  a  e  b  os  catetos  de  um  triângulo  cuja  hipotenusa  h  é  obtida  pela  equação:  ℎ=
    √𝑎2 +𝑏2.  Faça  um  programa  que  leia  os  valores  de  a  e  b,  e  calcule  o  valor  da  hipotenusa
    através da fórmula dada e imprima o resultado.
*/

int main()
{
    float cateto_oposto = 0, cateto_adjacente = 0, hipotenusa = 0;

    printf("\nInforme o valor do cateto oposto: ");
    scanf("%f", &cateto_oposto);

    printf("\nInforme o valor do cateto adjacente: ");
    scanf("%f", &cateto_adjacente);

    cateto_oposto = pow(cateto_oposto, 2);
    cateto_adjacente = pow(cateto_adjacente , 2);
    hipotenusa = sqrt(cateto_oposto + cateto_adjacente);

    printf("Hipotenusa = %.2f", hipotenusa);
    return 0;
}
