#include <stdio.h>
#include <stdlib.h>

/*
    Implemente um programa que leia a quantidade de eleitores de um município, o número de 
    votos brancos, nulos e válidos. Calcule e imprima o percentual de cada um dos tipos de votos 
    (brancos, nulos e válidos). 
*/

int main() {
    int total_eleitores, votos_brancos, votos_nulos, votos_validos;
    float p_brancos, p_nulos, p_validos;

    printf("Digite o total de eleitores: ");
    scanf("%d", &total_eleitores);

    printf("Digite o total de votos brancos: ");
    scanf("%d", &votos_brancos);

    printf("Digite o total de votos nulos: ");
    scanf("%d", &votos_nulos);

    printf("Digite o total de votos validos: ");
    scanf("%d", &votos_validos);

    p_brancos = (float) votos_brancos / total_eleitores * 100;
    p_nulos = (float) votos_nulos / total_eleitores * 100;
    p_validos = (float) votos_validos / total_eleitores * 100;

    printf("Percentual de votos brancos: %.2f%%\n", p_brancos);
    printf("Percentual de votos nulos: %.2f%%\n", p_nulos);
    printf("Percentual de votos validos: %.2f%%\n", p_validos);
}