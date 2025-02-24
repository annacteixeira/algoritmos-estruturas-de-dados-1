#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que mostre ao usuário um menu com quatro opções de operações
    matemáticas (1. soma, 2. subtração, 3. multiplicação, 4. divisão e 5. módulo). O usuário escolhe
    uma das opções (1 a 5), e o seu programa recebe dois valores numéricos do usuário e realiza a
    operação escolhida (somente a escolhida), mostrando o resultado. Caso a opção digitada seja
    inválida (ou seja, menor que 1 ou maior que 5) ou os valores recebidos sejam inválidos, seu
    programa deve mostrar uma mensagem indicando incorreção na entrada de dados.
*/

int main() {
    int opcao = 0, continua = 0;
    float n1 = 0, n2 = 0;

    do {
        printf("\nEscolha qual opcao deseja realizar:\n"
               "[1] - Soma\n"
               "[2] - Subtracao\n"
               "[3] - Multiplicacao\n"
               "[4] - Divisao\n"
               "[5] - Modulo\n"
               "Digite sua opcao: ");

        scanf("%d", &opcao);

        while (opcao < 1 || opcao > 5) {
            printf("\nOpcao invalida. Escolha um numero de 1 a 5: ");
            scanf("%d", &opcao);
        }

        printf("\nInforme dois valores para realizar a operacao escolhida: ");
        scanf("%f%f", &n1, &n2);

        while (opcao == 4 && n2 == 0) {
            printf("\nNao eh permitido dividir por zero. Informe outro valor para o segundo numero: ");
            scanf("%f", &n2);
        }

        switch (opcao) {
            case 1:
                printf("\nSoma = %.2f", n1 + n2);
                break;
            case 2:
                printf("\nSubtracao = %.2f", n1 - n2);
                break;
            case 3:
                printf("\nMultiplicacao = %.2f", n1 * n2);
                break;
            case 4:
                printf("\nDivisao = %.2f", n1 / n2);
                break;
            case 5:
                {
                    int intN1 = (int)n1, intN2 = (int)n2;
                    if (intN2 == 0) {
                        printf("\nNao eh permitido calcular modulo por zero.");
                    } else {
                        printf("\nModulo = %d", intN1 % intN2);
                    }
                }
                break;
        }

        printf("\nPara encerrar, digite 1. Para continuar, digite qualquer numero: ");
        scanf("%d", &continua);

    } while (continua != 1);

    printf("\nSaindo...");
    return 0;
}