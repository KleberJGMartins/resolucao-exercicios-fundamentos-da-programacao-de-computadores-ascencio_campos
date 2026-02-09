/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

12) Faça um programa que receba dois números maiores que zero, 
calcule e mostre um elevado ao outro. */

#include <stdio.h>
#include <math.h>

int main() {

    int n1, n2, r1, r2;
    
    printf("\n\n---CALCULADORA DE POTENCIA---");
    printf("\n.................................");

    printf("\n\nInforme o primeiro numero >0: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero >0: ");
    scanf("%d", &n2);

    r1 = pow(n1,n2);
    r2 = pow(n2,n1);

    printf("\n\t.................................");
    printf("\n\tO resultado de %d^%d e': %d", n1, n2, r1);
    printf("\n\tO resultado de %d^%d e': %d", n2, n1, r2);
    printf("\n\t.................................\n\n");

    return 0;
}