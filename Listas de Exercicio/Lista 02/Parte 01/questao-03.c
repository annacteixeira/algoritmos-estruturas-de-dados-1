#include <stdio.h>
#include <stdlib.h>

/*
    Uma empresa vende o mesmo produto para quatro estados diferentes. Cada estado possui
    uma alíquota de imposto sobre o produto. Escreva um programa em que o usuário insira o valor
    e a primeira letra do estado de destino do produto. O programa deve retornar o preço final
    (produto + imposto). Se o estado não for válido, o sistema deve mostrar uma mensagem de erro.
*/

int main(){
    char estado;
    float valor_produto = 0, valor_com_impostos = 0;
    int continua = 0;

    do{

        printf("\nInforme a primeira leta do estado que voce deseja "
            "saber o valor final do produto.\nEstados disponiveis:\n"
            "[MG] - M\n"
            "[SP] - S\n"
            "[RJ] - R\n"
            "[ES] - E\n");

        scanf(" %c", &estado);

        while (estado != 'M' && estado != 'S' && estado != 'R' && estado != 'E') {
            printf("\nEstado invalido. Escolha M, S, R ou E: ");
            scanf(" %c", &estado); // Adicione um espaço antes do %c para ignorar espaços em branco
        }
        

        printf("\nInforme o valor do produto sem impostos: ");
        scanf("%f", &valor_produto);

        switch(estado) {
            case 'M':
                valor_com_impostos = valor_produto + (valor_produto * 0.07);
                printf("\nO valor final do produto eh: %.2f", valor_com_impostos);
                break;
            
            case 'S':
                valor_com_impostos = valor_produto + (valor_produto * 0.12);
                printf("\nO valor final do produto eh: %.2f", valor_com_impostos);
                break;

            case 'R':
                valor_com_impostos = valor_produto + (valor_produto * 0.15);
                printf("\nO valor final do produto eh: %.2f", valor_com_impostos);
                break;
            
            case 'E':
                valor_com_impostos = valor_produto + (valor_produto * 0.08);
                printf("\nO valor final do produto eh: %.2f", valor_com_impostos);
                break;
            
            default:
                printf("Estado invalido, tente novamente");
        }

        printf("\nPara continuar, digite 1\nPara encerrar, digite qualquer valor: ");
        scanf("%d", &continua);
    } while(continua == 1);

    printf("\n[Saindo...]");
    

    return 0;
}
