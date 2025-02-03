#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10, y = 10;
    int w = 10, z = 10;

    x++;
    ++y;

    w--;
    z--;

    printf("x = %d\n", x); // x = x + 1
    printf("y = %d\n", y);

    printf("w = %d\n", w); // w = w - 1
    printf("z = %d\n", z);

    // Quando atribuímos a operação de incremento a uma variável, existe diferença entre pré e pós incremento

    int a = 10, b, c = 10, d;

    /* 
        PÓS INCREMENTO: É feita a atribuição, e, em seguida, a soma da variável a

        b = a;
        a++;
    */
    b = a++;
    printf("\n====================================\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    d = ++c;
        /* 
        PRÉ INCREMENTO: O incremento é feito antes da atribuição de valor à variável
        a++;
        b = a;
    */

    printf("\n====================================\n");
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}