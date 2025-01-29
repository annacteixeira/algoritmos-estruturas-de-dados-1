#include <stdio.h>
#include <Stdlib.h>

int main() {
    /* O comando printf irá exibir no console toda a mensagem que estiver entre aspas duplas ("")*/
    printf("Meu programa em C\n");

    char letra = 'a';
    int nro = 10;
    float n = 5.25;

    /* 
        Formatadores em C:
        %c - caractere
        %d - inteiro
        %f - ponto flutuante
        %o - inteiro em formato octal
        %x - inteiro em formato hexadecimal
        %u - unsigned int
        %ld - long int
        %e - inteiro em formato exponencial
        %g - float. escolhe a melhor maneira de exibição entre normal e exponencial
        %s - string
        %p - endereço de um ponteiro
        %n - quantos caracteres a função printf imprimiu
    */

    printf("%c \n", letra);
    printf("%d \n", nro);
    printf("%f \n", n);

    printf("Letra: %c, inteiro: %d, float: %f\n", letra, nro, n);
    printf("Numero + 1 = %d\n", nro + 1);
    return 0;
}