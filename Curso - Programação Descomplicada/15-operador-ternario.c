#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
        O operador ternário é uma forma simplificada de escrever um comando if-else. Ele é composto por três partes:

        1. Uma expressão que retorna um valor booleano (verdadeiro ou falso)
        2. O operador ternário (?)
        3. Dois blocos de comandos separados por dois pontos (:)

        variável = condição ? valor_se_verdadeiro : valor_se_falso;
    */

    int x, y, z;
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    if(x > y) {
        z = x;
    } else {
        z = y;
    }

    printf("O maior valor eh: %d\n", z);

    /* Reescrevendo com o operador ternário: */

    z = x > y ? x : y;
    printf("O maior valor eh: %d\n", z);

    (x > y) ? printf("x eh maior que y\n") : printf("y eh maior que x\n");

    return 0;
}