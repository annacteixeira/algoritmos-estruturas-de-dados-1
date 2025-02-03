#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        O comando else é utilizado em conjunto com o comando if. Se a condição do if for falsa, o bloco de comandos dentro do else é executado.

        Forma geral:
        if(condição){
            bloco de comandos 1
        } else {
            bloco de comandos 2
        }
    */
    
    int x;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    if(x % 2 == 0){
        printf("O valor digitado eh par\n");
    } else {
        printf("O valor digitado eh impar\n");
    }
    
    return 0;
}