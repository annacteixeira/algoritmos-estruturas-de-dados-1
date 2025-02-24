#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que indique o nome do mês por extenso, de acordo com um número
    digitado pelo usuário.
    Exemplo: Entrada = 4. Saída = "Abril". Seu programa deve exibir o mês correspondente para
    qualquer valor de 1 a 12. Caso o usuário digite um valor menor que 1 ou maior que 12, seu
    programa deve exibir a mensagem: “Mês inválido”.

    Utilize o comando switch-case. Trate/rejeite as entradas inválidas.
*/
int main(){
    int mes = 0, continua = 0;

    do {
        printf("\nInforme o mes que deseja saber o nome: ");
        scanf("%d", &mes);

        while(mes < 1 || mes > 12) {
            printf("\nMes invalido. Escolha um valor entre 1 e 12");
        }

        switch(mes){
            case 1:
                printf("\nJaneiro");
                break;
            case 2:
                printf("\nFevereiro");
                break;
            case 3:
                printf("\nMarco");
                break;
            case 4:
                printf("\nAbril");
                break;
            case 5:
                printf("\nMaio");
                break;
            case 6:
                printf("\nJunho");
                break;
            case 7:
                printf("\nJulho");
                break;
            case 8:
                printf("\nAgosto");
                break;
            case 9:
                printf("\nSetembro");
                break;
            case 10:
                printf("\nOutubro");
                break;
            case 11:
                printf("\nNovembro");
                break;
            case 12:
                printf("\nDezembro");
                break;
            default:
                printf("\nMes invalido");
        }

        printf("\nPara continuar, digite 1, para encerrar, digite qualquer numero: ");
        scanf("%d", &continua);

    } while(continua == 1);

    printf("\nSaindo...\n");

    return 0;
}
