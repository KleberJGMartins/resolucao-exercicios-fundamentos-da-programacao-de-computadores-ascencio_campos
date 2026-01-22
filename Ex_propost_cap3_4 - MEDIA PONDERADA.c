/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

4) Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
peso 2 para a primeira e peso 3 para a segunda. */

#include <stdio.h>

int main(){

    float nota1, nota2, peso1 = 2.0, peso2 = 3.0, media;

    printf("\n\nInforme a nota 1: ");
    scanf("%f", &nota1);
    printf("Informe a nota 2: ");
    scanf("%f", &nota2);

    media = ((peso1*nota1) + (peso2*nota2)) / (peso1 + peso2);

    printf("\n\n\t--> A media final e': %.2f\n\n", media);

    return 0;
}