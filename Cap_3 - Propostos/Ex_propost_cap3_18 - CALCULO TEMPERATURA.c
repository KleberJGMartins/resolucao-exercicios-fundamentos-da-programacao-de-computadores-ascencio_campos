/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
Fahrenheit. 
Sabe-se que F=180*(C+32)/100. ***esta fórmula do livro esta inadequada. 
Formulas corretas: F = ((180*C)/100) + 32 OU F=(1.8*C)+32 OU F=(9.0/5.0*C)+32.  */

#include<stdio.h>

int main(){
    float celsius, fahr;

    printf("\n\nInforme a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahr = ((180 * celsius) / 100) + 32; //(1.8*celsius) + 32  ou  (9.0/5.0*celsius)+32
    
    printf("\n\n\tConversao: %.2f graus Celsius e' %.2f graus Fahrenheit\n\n", celsius, fahr);

    return 0;
}