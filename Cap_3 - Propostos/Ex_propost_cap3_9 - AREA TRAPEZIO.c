/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

9) Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2 */

#include <stdio.h>
int main(){

    float b_M, b_m, alt, area;

    printf("\n\nTrapezio - Base Maior (cm): ");
    scanf("%f", &b_M);
    printf("Trapezio - Base Menor (cm): ");
    scanf("%f", &b_m);
    printf("Trapezio - Altura (cm): ");
    scanf("%f", &alt);

    area = ((b_M + b_m) * alt) / 2;

    printf("\n\n\t --: A area do Trapezio --> %.2f cm2\n\n", area);
    
    return 0;
}