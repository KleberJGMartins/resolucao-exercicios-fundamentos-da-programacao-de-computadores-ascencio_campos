/*
1. Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
segundo.

*/


#include <stdio.h>
int main(void){
    int n1, n2, calc;

    printf("--- SUBTRACAO ---\n");

    printf("Informe o numero 1: \n");
    scanf("%d", &n1);
    printf("Informe o nnmero 2: \n");
    scanf("%d", &n2);

    calc = n1 - n2;

    printf("%d - %d = %d \n", n1, n2, calc);
    
    return 0;
}