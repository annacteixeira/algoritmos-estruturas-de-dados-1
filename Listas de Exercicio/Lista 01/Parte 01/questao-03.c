#include <stdio.h>
#include <stdlib.h>

/* 
    Implemente um programa que leia dois números reais e armazene-os em duas variáveis (ex.: 
    A e B). Em seguida, troque dos valores das variáveis de forma que a primeira variável passe a ter 
    o valor da segunda, e vice-versa. Ao final, imprima os valores finais das variáveis.
*/

int main() {
    float A, B, aux;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    aux = A;
    A = B;
    B = aux;

    printf("A = %.2f\nB = %.2f\n", A, B);
}