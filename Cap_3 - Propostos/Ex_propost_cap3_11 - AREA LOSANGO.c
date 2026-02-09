/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

11) Faça um programa que calcule e mostre a área de um losango. 
Sabe-se que: A= (diagonal maior * diagonal menor)/2. */

#include <stdio.h>
int main(){
    float diag_M, diag_m, calc;

    printf("\n\n---AREA LOSANGO---");
    printf("\n-------------------------");

    printf("\n\nInforme a Diagonal Maior (cm): ");
    scanf("%f", &diag_M);
    printf("Informe a Diagonal Menor (cm): ");
    scanf("%f", &diag_m);

    calc = (diag_M * diag_m) / 2;


    printf("\n\n\t--> A area do losango e': %.2f cm2\n\n", calc);

    return 0;
}