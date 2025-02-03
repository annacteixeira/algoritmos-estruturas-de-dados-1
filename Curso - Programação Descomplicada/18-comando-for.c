#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        O comando for é uma estrutura de repetição que executa um bloco de comandos um número fixo de vezes.

        Forma geral:
        for(inicializacao; condicao; incremento) {
            bloco de comandos;
        }

        O comando for é equivalente ao comando while:
        while(condicao) {
            bloco de comandos;
            incremento;
        }

        O comando for é mais compacto e legível que o comando while.
        Utilizamos o comando for quando sabemos o número de iterações que queremos executar.
    */

    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    for(c = a; c <= b; c++) {
        printf("%d\n", c);
    }
    
    return 0;
}