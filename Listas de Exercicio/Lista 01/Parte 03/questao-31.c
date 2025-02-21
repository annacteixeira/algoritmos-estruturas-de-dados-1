#include <stdio.h>
#include <stdlib.h>

/*
    Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros 
    por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s
*/


int main()
{
    int velocidade_km = 0, velocidade_ms = 0;

    printf("\nInforme a velocidade em km/h: ");
    scanf("%d", &velocidade_km);

    velocidade_ms = velocidade_km / 36;

    printf("\n%dkm/h = %dm/s", velocidade_km, velocidade_ms);

    return 0;
}