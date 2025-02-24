#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que calcule a amplitude total (AT) de uma série de cinco números. A
    amplitude e definida pela diferença entre o menor e o maior número.
    AT = maior valor – menor valor
*/

int main(){
    float numeros[5];
    float maior, menor;
    float amplitude = 0;


    printf("\nInforme 5 numeros: ");
    for(int i = 0; i < 5; i++){
        scanf("%f", &numeros[i]);
    }

    maior = menor = numeros[0];

    for(int i = 1; i < 5; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }

        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }

    amplitude = maior - menor;
    printf("\nA amplitude total eh: %.2f", amplitude);

    return 0;
}