#include <stdio.h>
#include <stdlib.h>

/*
     Implemente um algoritmo com as linhas a seguir e apresente no código-fonte uma explicação 
     detalhada, com suas palavras, do que acontece em cada uma das linhas:
        Linha Comando 
        1     int a,b,c,d=1;  
        2     a = -2;  
        3     b = a*a;  
        4     c = d++;  
        5     d = c++ + 5;  
        6     d = ++c + 5;  
        7     printf ("%d %d %d %d", a, b, c, d)
*/

int main()
{
    // Declara as variáveis a, b, c e d. d recebe 1
    int a, b, c, d = 1;

    // Atribui o valor -2 à variável a
    a = -2;

    // b recebe o valor de a * a = -2 * -2 = 4
    b = a * a;

    // c recebe o valor de d, porém ele não é incrementado nessa execução
    c = d++;

    // nessa execução, c vale 1 e ainda não é incrementado, então c = 1 + 5 = 6
    d = c++ + 5;

    // nessa execução, c é pré-incrementado, logo c = 3, então c = 3 + 5 = 8
    d = ++c + 5;

    printf("%d %d %d %d", a, b, c, d);


    return 0;
}