#include <stdio.h>
#include <stdlib.h>

/*
    A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo
    que: O primeiro ganhador receberá 46% do total. O segundo receberá 32% do total. O terceiro
    receberá o restante. Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/

int main()
{
    const float valor = 780000;

    printf("\nPremio do primeiro ganhador = R$%.2f"
           "\nPremio do segundo ganhador = R$%.2f"
           "\nPremio do terceiro ganhador = R$%.2f", valor * 0.32, valor * 0.46, valor * 0.22);

    return 0;
}
