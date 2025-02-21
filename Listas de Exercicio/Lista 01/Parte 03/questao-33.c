#include <stdio.h>
#include <stdlib.h>

/*
    Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R
    = G * π/180, sendo G o ângulo em graus e R em radianos e π = 3.141592.
*/
int main()
{
    const float PI = 3.141592;
    float angulo = 0, radianos = 0;

    printf("\nInforme um angulo em graus: ");
    scanf("%f", &angulo);

    radianos = angulo * (PI / 180.0);

    printf("\nO angulo %.2f graus em radianos eh = %.2f\n", angulo, radianos);
    return 0;
}
