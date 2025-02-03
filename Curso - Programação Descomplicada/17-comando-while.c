#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        O comando while é uma estrutura de repetição que executa um bloco de comandos enquanto uma condição for verdadeira.
        A condição é avaliada antes da execução do bloco de comandos.
        Se a condição for falsa, o bloco de comandos não é executado.
        Se a condição for verdadeira, o bloco de comandos é executado e a condição é reavaliada.
        O bloco de comandos é executado até que a condição seja falsa.

        Forma geral:
        while(condicao) {
            bloco de comandos;
        }
    */

    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    while(a < b){
        a++;
        printf("a = %d\n", a);
    }
    
    return 0;
}