//
// Created by Anna on 29/01/2025.
//

#include <stdio.h>
#include <stdlib.h>

/*
    A linguagem C possui 4 tipos básicos de variáveis:
    char -> caracteres,
    int -> valores inteiros,
    float -> valores de ponto flutuante (reais),
    double -> valores de ponto flutuante de maior precisão
*/

/*
    Para definir o nome de variáveis, podemos utilizar:
    letras maiúsculas, letras minúsculas, números e underscore.

    Não podemos usar letras com acentuação ou caracteres especiais.
    Não poodemos usar palavras reservadas da linguagem
    Não podemos iniciar os nomes das variáveis com números

    Os nomes das variáveis são case sensitive.

    Exemplos de nomes de variáveis:
    x
    soma
    _soma
    soma1
    SOMA
    Soma
*/

int main(){
    /* Declaração atributiva */
    char letra = 'a';
    int numero = 10;

    /* É possível guardar valores numéricos de -128 a 127 em uma variável do tipo char,
        pois esse tipo trabalha com a tabela ASCII
    */
    char nro = 10;

    /* Na linguagem C, usamos o ponto (.) como separador de decimal */
    float n = 5.25;
    double d = 5.0e3; // 5.0 * 10^3 = 5000.00

    printf("Letra: %c\nNumero: %d\nNro: %d\nFloat: %.2f\nDouble: %.2f\n", letra, numero, nro, n, d);
    return 0;
}