/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

19) Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para
atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem
estar em metros. */

#include <stdio.h>
int main () {

    float alt_degrau, alt_destino, calc;

    printf("\n\n---CALCULO DEGRAUS ESCADA---");

    printf("\n\nInforme a altura do dregrau (m): ");
    scanf("%f", &alt_degrau);
    printf("Informe a altura da subida desejada (m): ");
    scanf("%f", &alt_destino);

    calc = alt_destino / alt_degrau ;

    printf("\n\tVoce vai precisar de %.0f degraus para o atingir seu destino!\n\n", calc);

    return 0;
}