#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        Aninhamento de if-else: É possível aninhar vários comandos if-else. Ou seja, um comando if-else pode estar dentro de outro comando if-else.
    */

    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("O valor digitado eh zero\n");
    } else {
        if (num % 2 == 0) {
            printf("O valor digitado eh par\n");
        } else {
            printf("O valor digitado eh impar\n");
        }
    }
}