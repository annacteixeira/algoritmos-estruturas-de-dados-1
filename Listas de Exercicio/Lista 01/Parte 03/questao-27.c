#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
*/

int main(){
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    printf("Antecessor: %d\n", numero - 1);
    printf("Sucessor: %d\n", numero + 1);

    return 0;
}