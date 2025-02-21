#include <stdio.h>
#include <stdlib.h>

/*
    Implemente um algoritmo que converta uma temperatura Fahrenheit em grau Celsius: 
    𝐺𝑟𝑎𝑢𝑠 𝐶𝑒𝑙𝑠𝑖𝑢𝑠=5/9⋅(𝐹𝑎ℎ𝑟𝑒𝑛ℎ𝑒𝑖𝑡−32) 
    Obs: Ao codificar o programa, cuidado com o uso do operador de divisão. Em C, um mesmo 
    operador é utilizado para divisão inteira e para divisão real – a diferença se dá pelos operandos. 
    Será executada uma divisão inteira se ambos os operandos forem valores inteiros, caso 
    contrário, uma divisão real será realizada
*/

int main()
{
    float fahrenheit = 0, celsius = 0;

    printf("\nInforme uma temperatura em Fahrenheit para saber seu valor em Celsius: ");
    scanf("%f", &fahrenheit);

    celsius = 5.0/9.0 * (fahrenheit - 32);

    printf("\n%.2fF = %.2fC\n", fahrenheit, celsius);
    return 0;
}