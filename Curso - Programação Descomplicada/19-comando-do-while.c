#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        O comando do-while é uma estrutura de repetição que executa um bloco de comandos enquanto uma condição for verdadeira.
        A condição é avaliada após a execução do bloco de comandos.
        Se a condição for falsa, o bloco de comandos não é executado.
        Se a condição for verdadeira, o bloco de comandos é executado e a condição é reavaliada.
        O bloco de comandos é executado até que a condição seja falsa.

        Forma geral:
        do {
            bloco de comandos;
        } while(condicao);
    */

    int a, b;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    do{
        printf("%d\n", a);
        a++;
    } while (a < b);

    // O comando do-while é muito utilizado quando queremos construir um menu de opções.

    int i;

    do{
        printf("Escolha uma opcao:\n");
        printf("[1] Opcao 1\n");
        printf("[2] Opcao 2\n");
        printf("[3] Opcao 3\n");

        scanf("%d", &i);
    }while((i < 1) || (i > 3));

    printf("Voce escolheu a opcao %d\n", i);
    return 0;
}