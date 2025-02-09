#include <stdio.h>
#include <stdlib.h>

/*
    Implemente um algoritmo que solicite ao usuário um número inteiro n (digitado) e 
    posteriormente o sistema mostra o sucessor de n
*/

int main(){
    int n, sucessor;

    printf("\nDigite um numero n para saber seu sucessor: ");
    scanf("%d", &n);

    sucessor = n + 1;

    printf("\nO sucessor de %d eh %d\n", n, sucessor);
}