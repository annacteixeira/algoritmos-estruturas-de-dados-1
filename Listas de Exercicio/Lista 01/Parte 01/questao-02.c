#include <stdio.h>
#include <stdlib.h>

/*
    Implemente um algoritmo que solicita o valor de 3 notas (n1, n2 e n3) e depois mostra: a soma, 
    a média e o produto das notas
*/
int main() {
    float n1, n2, n3, soma, media, produto;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);

    printf("\nDigite a terceira nota: ");
    scanf("%f", &n3);

    soma = n1 + n2 + n3;
    media = soma / 3;
    produto = n1 * n2 * n3;

    printf("\nA soma das notas eh %.2f\nA media das notas eh %.2f\nO produto das notas eh %.2f", soma, media, produto);

}