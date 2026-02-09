/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

14) Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, 
calcule e mostre: 
a) a idade dessa pessoa; 
b) quantos anos ela terá em 2050.  */

#include <stdio.h>
int main() {

    int ano_nasc, ano_atual, idade_atual, idade_2050;

    printf("\n\n---CALCULADORA IDADE---");
    printf("\n.............................");

    printf("\nInforme o Ano Atual: ");
    scanf("%d", &ano_atual);
    printf("Informe o seu Ano de Nascimento: ");
    scanf("%d", &ano_nasc);

    idade_atual = ano_atual - ano_nasc;
    idade_2050 = 2050 - ano_nasc;
    
    printf("\n\n.........................................");
    printf("\nA sua idade e': %d anos", idade_atual);
    printf("\nEm 2050 voce tera': %d anos", idade_2050);
    printf("\n.........................................");

    return 0;
}