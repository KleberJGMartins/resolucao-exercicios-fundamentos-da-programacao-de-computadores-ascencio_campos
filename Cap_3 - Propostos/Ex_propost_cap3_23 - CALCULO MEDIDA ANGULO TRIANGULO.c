/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

23) Faça um programa que receba a medida de dois ângulos de um triângulo, 
calcule e mostre a medida do terceiro ângulo. 
Sabe-se que a soma dos ângulos de um triângulo é 180 graus. */

#include<stdio.h>
int main(){

    float ang1, ang2, ang3;

    printf("\n\nInforme a primeiro angulo do triangulo (graus): ");
    scanf("%f", &ang1);
    printf("Informe a segundo angulo do triangulo (graus): ");
    scanf("%f", &ang2);

    ang3 = 180 - ang1 - ang2;

    printf("\n\no terceiro angulo do triangulo e': %.1f graus\n\n", ang3);

    return 0;
}