/* 5) Elabore um programa que leia dois valores e apresente os resultados das quatro operações aritméticas
básicas realizadas entre eles. Exemplo:
Entrada: 2 e 5
Saída:
2 + 5 = 7
2 – 5 = -3
2 x 5 = 10
2 : 5 = 0,4 */ 

#include<stdio.h>
int main(){

    int num1, num2, soma, subtr, multip, divi;

    printf("\n\nInforme o valor do numero 1: ");
    scanf("%d", &num1);
    printf("Informe o valor do numero 2: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtr = num1 - num2;
    multip = num1 * num2;
    divi = num1 / num2;

    printf("\n\n---OPERACOES ARITMETICAS BASICAS---");
    printf("\n\t%d + %d = %d", num1, num2, soma);
    printf("\n\t%d - %d = %d", num1, num2, subtr);
    printf("\n\t%d X %d = %d", num1, num2, multip);
    printf("\n\t%d / %d = %d\n\n", num1, num2, divi);

    return 0;
}