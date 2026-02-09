/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

    1) Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.
*/

#include <stdio.h>
int main () {
    int num1, num2, num3, num4, soma;

    printf("Digite o numero 1: ");
    scanf("%d", &num1);
    printf("Digite o numero 2: ");
    scanf("%d", &num2);
    printf("Digite o numero 3: ");
    scanf("%d", &num3);
    printf("Digite o numero 4: ");
    scanf("%d", &num4);

    soma = num1+num2+num3+num4;

    printf("A soma dos 4 numeros sera: %d", soma);

    return 0;
}