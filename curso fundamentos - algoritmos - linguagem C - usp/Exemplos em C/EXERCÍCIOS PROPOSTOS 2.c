/*
2. Faça um programa que receba três números, calcule e mostre a multiplicação desses números.

*/


#include <stdio.h>
int main(void){
    int n1, n2, n3, calc;

    printf("--- MULTIPLICACAO ---\n\n");

    printf("Informe o numero 1: \n");
    scanf("%d", &n1);
    printf("Informe o numero 2: \n");
    scanf("%d", &n2);
    printf("Informe o numero 3: \n");
    scanf("%d", &n3);

    calc = n1 * n2 * n3;

    printf("Calc --> %d X %d X %d = %d\n", n1, n2, n3, calc);
            
    return 0;
}