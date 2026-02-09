/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

8) Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas. */

#include <stdio.h>
int main(){

    float peso, kg_g;

    printf("\n\nInforme o Peso (Kg): ");
    scanf("%f", &peso);

    kg_g = peso * 1000;
    
    printf("\n\nO peso em gramas e': %.2f gramas\n\n", kg_g);

    return 0;
}