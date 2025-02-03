#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        Operadores lógicos:
        && : E
        || : OU
        !  : NÃO

        Forma geral:
        expressão1 operador_logico expressão2

        Resultado da operação:
        0: falso
        1: verdadeiro
    */

    // Operador E (&&): Retorna verdadeiro se ambas as expressões forem verdadeiras. Do contrário, retorna falso

    int r, x = 5, y = 3;

    r = (x > 2) && (y < x);
    printf("Resultado = %d\n", r); // 1

    r = (x % 2 == 0) && (y > 0); // 0
    printf("Resultado = %d\n", r);


    // Operador OU (||): Retorna verdadeiro se pelo menos uma das expressões for verdadeira. Do contrário, retorna falso

    r = (x > 2) || (y > x); // 1
    printf("Resultado = %d\n", r);

    r = (x % 2 == 0) || (y < 0); // 0
    printf("Resultado = %d\n", r);

    // Operador NÃO (!): Inverte o resultado da expressão

    r = !(x > 2); // 0
    printf("Resultado = %d\n", r);

    r = !((x > 7) && (x > y)); // 1
    printf("Resultado = %d\n", r);
    return 0;
}