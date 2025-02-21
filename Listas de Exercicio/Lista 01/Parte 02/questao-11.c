#include <stdio.h>
#include <stdlib.h>

/*
    Escreva  um  programa  em  C  para  que  converta  uma  quantidade  específica  de  dias  em  anos 
    (considerar apenas 365 dias), semanas e dias.
*/

int main()
{
    int dias_usuario = 0, anos = 0, semanas = 0, dias_restantes = 0;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias_usuario);

    if(dias_usuario < 0){
        printf("\nA quantidade de dias nao pode ser negativa");
    }

    anos = dias_usuario / 365;
    dias_restantes = dias_usuario % 365;
    semanas = dias_restantes / 7;
    dias_restantes = dias_restantes % 7;

    printf("\n%d dias equivalem a %d ano(s), %d semana(s) e %d dia(s)", dias_usuario, anos, semanas, dias_restantes);

    return 0;
}