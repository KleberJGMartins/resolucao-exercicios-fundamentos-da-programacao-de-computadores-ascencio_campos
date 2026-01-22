/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

3) Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações.*/

#include <stdio.h>
int main(){

    int num1, num2, calc;

    printf("\n\nInforme o primeiro numero: ");
    scanf("%d", &num1); 
    printf("Informe o segundo numero (diferente de zero): ");
    scanf("%d", &num2);

    calc = num1 / num2;

    printf("\n\n\t--> A divisao de %d por %d e': %d\n\n", num1, num2, calc);
    
    return 0;
}