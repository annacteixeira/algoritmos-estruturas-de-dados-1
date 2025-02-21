#include <stdio.h>
#include <stdlib.h>

/*
     Implemente  um  programa  que  leia  um  número  inteiro  com  três  dígitos  (no  formato  CDU  - 
     centena, dezena e unidade) e mostre o número invertido (no formato UDC). 
*/
int main()
{
    int numero = 0, unidade = 0, dezena = 0, centena = 0, invertido = 0;

    printf("\nInforme um numero de 3 digitos: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    if(unidade == 0){
        printf("0");
    }

    invertido = (unidade * 100) + (dezena * 10) + centena;
    printf("%d\n", invertido);

    return 0;
}