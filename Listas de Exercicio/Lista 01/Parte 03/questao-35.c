#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
    Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O volume de
    um cilindro circular é calculado por meio da seguinte fórmula: 𝑣 =𝜋⋅𝑟𝑎𝑖𝑜2 ⋅𝑎𝑙𝑡𝑢𝑟𝑎, em que
    π = 3.141592
*/

int main()
{
    const float PI = 3.141592;
    float altura = 0, raio = 0, volume = 0;

    printf("\nQual eh a altura do cilindro? ");
    scanf("%f", &altura);

    printf("\nQual eh o raio do cilindro? ");
    scanf("%f", &raio);

    volume = PI * pow(raio, 2) * altura;

    printf("\nO volume do cilindro eh: %.2f\n", volume);
    return 0;
}
