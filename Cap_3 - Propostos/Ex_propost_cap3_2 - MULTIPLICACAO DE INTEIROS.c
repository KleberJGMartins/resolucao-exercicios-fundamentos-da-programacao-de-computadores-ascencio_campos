/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

2) Faça um programa que receba três números, calcule e mostre a multiplicação desses números.*/

#include <stdio.h>
int main(){

    int num1, num2, num3, calc;

    printf("\n\nInforme o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);

    calc = num1 * num2 * num3;

    printf("\n\n\t --> %d X %d X %d e': %d\n\n", num1, num2, num3, calc);
    

    return 0;
}