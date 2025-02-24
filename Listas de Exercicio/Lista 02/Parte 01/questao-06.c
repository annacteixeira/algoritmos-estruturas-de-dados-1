#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que receba três valores do usuário: A, B e C. Seu programa deve verificar
    se C é divisível por A e/ou B. Caso C seja divisível por A e B, imprima na tela “Divisível por ambos”.
    Caso C seja divisível por A ou por B, mas não por ambos, imprima na tela “Divisível por um”. Caso
    C não seja divisível nem por A nem por B, imprima na tela “Não é divisível”. Caso o usuário digite
    um valor negativo ou zero para A e/ou B, imprima na tela “Valor inválido” e finalize a execução
    do programa.
*/

int main(){
    int A = 0, B = 0, C = 0;

    printf("\nInforme o primeiro valor: ");
    scanf("%d", &A);

    printf("\nInforme o segundo valor: ");
    scanf("%d", &B);
    
    printf("\nInforme o terceiro valor: ");
    scanf("%d", &C);

    if(A <= 0 || B <= 0){
        printf("\nValor invalido");
        return 0;
    }

    if(C % A == 0 && C % B == 0){
        printf("\nDivisivel por ambos");
    } else if (C % A == 0 || C % B == 0){
        printf("\nDivisivel por um");
    } else {
        printf("\nNao eh divisivel");
    }

    return 0;
}