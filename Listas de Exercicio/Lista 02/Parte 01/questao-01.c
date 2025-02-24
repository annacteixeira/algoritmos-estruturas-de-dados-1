#include <stdio.h>
#include <stdlib.h>

/*
    Crie um algoritmo que leia 3 números reais e mostre o maior, o menor e indique o elemento
    do meio dentre os três números.

*/


int main()
{
    float n1 = 0, n2 = 0, n3 = 0, maior = 0, meio = 0, menor = 0;

    printf("\nInforme o primeiro numero real: ");
    scanf("%f", &n1);

    printf("\nInforme o segundo numero real: ");
    scanf("%f", &n2);

    printf("\nInforme o terceiro numero real: ");
    scanf("%f", &n3);

    // verificação do maior
    if(n1 > n2 && n1 > n3){
        maior = n1;
        meio = (n2 > n3) ? n2: n3;
        menor = (n2 < n3) ? n2 : n3;
    } else if(n2 > n1 && n2 > n3) {
        maior = n2;
        meio = (n1 > n3) ? n1 : n3;
        menor = (n1 < n3) ? n1 : n3;
    } else{
        maior = n3;
        meio = (n1 > n2) ? n1 : n2;
        menor = (n1 < n2) ? n1 :  n2;
    }

    printf("\nMenor: %.2f\nMeio: %.2f\nMaior: %.2f\n", menor, meio, maior);

    return 0;
}
