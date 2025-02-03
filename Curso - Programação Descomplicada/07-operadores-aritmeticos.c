#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        As operações aritméticas em C são:
        Soma: +
        Subtração: - 
        Multiplicação: *
        Divisão: /
        Resto: %
    */
    
    int x1;
    int x2 = 10, x3 = 12;
    char ch1;
    char ch2 = '0', ch3 = 'A';
    float f1;
    float f2 = 5.25, f3 = 10.5;

    printf("Operacao de soma\n");
    x1 = x2 + x3;
    printf("x1 = %d + %d\tx1 = %d\n", x2, x3, x1);

    ch1 = ch2 + ch3;
    printf("ch1 = %c + %c\tch1 = %c\n", ch2, ch3, ch1);

    f1 = f2 + f3;
    printf("f1 = %.2f + %.2f\tf1 = %.2f\n", f2, f3, f1);

    printf("\n====================================\n");
    printf("Operacao de subtracao\n");

    x1 = x3 - x2;
    printf("x1 = %d - %d\tx1 = %d\n", x3, x2, x1);

    f1 = -f2;
    printf("f1 = %.2f", f1);

    printf("\n====================================\n");
    printf("Operacao de multiplicacao\n");

    f1 = 3 * f2;
    printf("f1 = 3 * %.2f\tf1 = %.2f\n", f2, f1);

    x1 = x3 * x2;
    printf("x1 = %d * %d\tx1 = %d\n", x3, x2, x1);

    x1 = 3 * f2; // O resultado será um inteiro devido à truncagem
    printf("x1 = 3 * %.2f\tx1 = %d\n", f2, x1);

    printf("\n====================================\n");
    printf("Operacao de divisao\n");

    int z1, z2 = 9;
    float w1, w2 = 5.25;

    z1 = z2 / 2; // O resultado deveria ser 4.5, porém, como z1 é um inteiro, o resultado será truncado e resultará em 4
    printf("z1 = %d / 2\tz1 = %d\n", z2, z1);

    w1 = z2 / 2.0;
    printf("w1 = %.2f / 2.0\tw1 = %.2f\n", (float)z2, w1); // O cast (float) é necessário para que o resultado seja um float

    // Precedência de operadores

    w1 = w2 + 10 / 2.0;
    printf("w1 = %.2f + 10 / 2.0\tw1 = %.2f\n", w2, w1); // O resultado será 10.25, pois a divisão ocorre antes da soma

    w1 = (w2 + 10) / 2.0;
    printf("w1 = (%.2f + 10) / 2.0\tw1 = %.2f\n", w2, w1); // O resultado será 7.63, pois a soma ocorre antes da divisão

    printf("\n====================================\n");
    printf("Operacao de resto\n");
    // O operador de resto só funciona com números inteiros -> x2 % 2.0 é INVÁLIDO

    int h1, h2 = 9;

    h1 = h2 % 2;
    printf("h1 = %d %% 2\th1 = %d\n", h2, h1);

    return 0;
}