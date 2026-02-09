/* 4) Desenvolva um algoritmo para um programa que leia três valores inteiros e apresente como resultado
o valor do quadrado da soma dos três valores lidos.

LOGICA --> (a+b+c)² ou  seja, (a + b + c) * (a + b + c)
*/ 

#include<stdio.h>
int main(){
    int num1, num2, num3, quad_soma;

    printf("\n\nInforme o numero 1: ");
    scanf("%d", &num1);
    printf("Informe o numero 2: ");
    scanf("%d", &num2);
    printf("Informe o numero 3: ");
    scanf("%d", &num3);

    quad_soma = (num1 + num2 + num3) * (num1 + num2 + num3);


    printf("\n\nO quadrado da soma dos valores e': %d\n\n", quad_soma);


    return 0;
}