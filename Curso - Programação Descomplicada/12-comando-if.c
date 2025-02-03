#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        O comando if é utilizado para testar uma condição. Se a condição for verdadeira, o bloco de comandos dentro do if é executado. Caso contrário, o bloco de comandos dentro do else é executado.

        Forma geral:
        if(condição){
            bloco de comandos
        }
    */

    int x;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("O valor digitado eh positivo\n");
    }

    if ((x % 2 == 0) || (x < 0)) {
        printf("O valor digitado eh par ou negativo\n");
    }

    return 0;
}