#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        O comando switch é uma forma simplificada de escrever uma sequência de comandos if-else. 
        Ele é composto por uma expressão que é comparada com uma lista de valores.
        Se a expressão for igual a um dos valores da lista, o bloco de comandos correspondente é executado.
        Se a expressão não for igual a nenhum dos valores da lista, o bloco de comandos default é executado.

        Forma geral:
        switch(expressao) {
            case valor1:
                bloco de comandos 1;
                break;
            case valor2:
                bloco de comandos 2;
                break;
            ...
            case valorN:
                bloco de comandos N;
                break;
            default:
                bloco de comandos default;
        }
    */

    char ch;

    printf("Digite um caractere de pontuacao: ");
    scanf("%c", &ch);

    switch (ch) {
        case '.':
            printf("Ponto.\n");
            break;
        case ',':
            printf("Virgula.\n");
            break;
        case ';':
            printf("Ponto e virgula.\n");
            break;
        case ':':
            printf("Dois pontos.\n");
            break;
        default:
            printf("Nao eh pontuacao.\n");
    }
}