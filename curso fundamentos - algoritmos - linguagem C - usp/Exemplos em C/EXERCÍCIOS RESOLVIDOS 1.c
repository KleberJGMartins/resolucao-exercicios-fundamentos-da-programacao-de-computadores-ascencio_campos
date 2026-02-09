/*1. Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números. pag 36

ALGORITMO
DECLARE n1, n2, n3, n4, soma NUMÉRICO
LEIA n1, n2, n3, n4
soma <- n1 + n2 + n3 + n4
ESCREVA soma
FIM_ALGORITMO.

*/


#include <stdio.h>
int main(void){
    int n1, n2, n3, n4, soma;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &n3);
    printf("Informe o quarto numero: ");
    scanf("%d", &n4);

    soma = n1 + n2 + n3 + n4;

    printf("\nA soma dos numeros informados e': %d", soma);
    
    return 0;
}