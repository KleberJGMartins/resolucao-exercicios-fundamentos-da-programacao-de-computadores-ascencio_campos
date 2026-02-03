/* 
3) Desenvolva um algoritmo para um programa que leia três valores inteiros e apresente como resultado o
valor da soma dos quadrados dos três valores lidos. 

lógica --> S = a² + b² + c²

*/

#include<stdio.h>

int main(){

    int num1, num2, num3, soma;

    printf("\n\nInforme o numero 1: ");
    scanf("%d", &num1);
    printf("Informe o numero 2: ");
    scanf("%d", &num2);
    printf("Informe o numero 3: ");
    scanf("%d", &num3);

    soma = (num1 * num1) + (num2 * num2) + (num3 * num3);

    printf("\n\nA soma dos quadrados dos valores e': %d\n\n", soma);

    return 0;

}
