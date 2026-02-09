/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

10) Faça um programa que calcule e mostre a área de um quadrado. 
Sabe-se que: A= lado * lado.*/

#include <stdio.h>
int main(){

    float lado, calc;

    printf("\n\nInforme a medida do lado do quadrado (cm): ");
    scanf("%f", &lado);

    calc = lado * lado;

    printf("\n\n\t--> A area do quadrado e': %.2f cm2\n\n", calc);
    
    return 0;
}