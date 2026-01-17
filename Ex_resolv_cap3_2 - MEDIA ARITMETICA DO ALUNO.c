/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

    2) Faça um programa que receba três notas, calcule e mostre a média aritmética.
*/

#include <stdio.h>
int main () {
    float N1, N2, N3, media;

    printf("\nInforme a Nota 1: ");
    scanf("%f",&N1);
    printf("Informe a Nota 2: ");
    scanf("%f", &N2);
    printf("Informe a Nota 3: ");
    scanf("%f",&N3);

    media= (N1+N2+N3)/3; //média aritmética
    
    printf("\n------------------------------");
    printf("\nA Nota final do aluno e': %.1f", media);
    printf("\n------------------------------");
    printf("\n");

    return 0;

}