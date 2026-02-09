/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

1) Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
segundo.*/

#include <stdio.h>

int main(){

    int num1, num2, calc;

    printf("\n\nCALCULO SUBTRACAO DE INTEIROS");

    printf("\n\nInforme o Primeiro Numero: ");
    scanf("%d", &num1);
    printf("Informe o Segundo Numero: ");
    scanf("%d", &num2);

    calc = num1 - num2;

    printf("\n\n\tA subtracao de %d - %d e' = %d\n\n", num1, num2, calc);




    return 0;
}