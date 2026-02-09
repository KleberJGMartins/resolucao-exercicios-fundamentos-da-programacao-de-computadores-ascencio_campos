/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

    3) Faça um programa que receba três notas, calcule e mostre a média aritmética.
*/

#include <stdio.h>
int main () {
    float N1, N2, N3, P1=3.5, P2=3.5, P3=3, media;

    printf("\n---MEDIA DO ALUNO---\n");
    printf("\nAva 1 - Peso: 3.5");
    printf("\nAva 2 - Peso: 3.5");
    printf("\nAva 3 - Peso: 3");
    printf("\n----------------");

    printf("\nInforme a Nota 1: ");
    scanf("%f",&N1);
    printf("Informe a Nota 2: ");
    scanf("%f", &N2);
    printf("Informe a Nota 3: ");
    scanf("%f",&N3);

    media=((N1*P1+N2*P2+N3*P3)/(P1+P2+P3)); //média ponderada
    printf("\n------------------------------");
    printf("\nA Nota final do aluno e': %.1f", media);
    printf("\n------------------------------");
    printf("\n");

    return 0;

}