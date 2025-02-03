#include <stdio.h>
#include <stdlib.h>

int main(){
    // Os operadores relacionais permitem realizar a comparação de valores em um programa

    /*
        Forma geral:
        valor1 "operador" valor2

        Resultado da comparação:
        0: a comparação é falsa
        1: a comparação é verdadeira
    */

   /*
        Operadores relacionais:
        >  : maior que
        >= : maior ou igual a
        <  : menor que
        <= : menor ou igual a
        == : igual a
        != : diferente de
   */

    int x = 5, y = 3;

    printf("Resultado = %d\n", x > 4); // 1
    printf("Resultado = %d\n", x >= y+2); // 1
    printf("Resultado = %d\n", x == 4); // 0
    printf("Resultado = %d\n", x-2 != y); // 0
    
    return 0;
}