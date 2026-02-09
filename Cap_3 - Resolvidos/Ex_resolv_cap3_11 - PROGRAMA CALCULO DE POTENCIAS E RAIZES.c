/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

11. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.*/

#include <stdio.h>
#include <math.h> //usar a biblioteca math.h

int main() {

    float  num, quad, cub, raiz_quad, raiz_cub;

    printf("\n\n---CALCULO DE POTENCIAS E RAIZES---");
    printf("\n....................................");

    printf("\n\nDigite um numero positivo > 0: ");
    scanf("%f", &num);

    quad = pow(num,2);
    cub = pow(num,3);
    raiz_quad = sqrt(num);
    raiz_cub = cbrt(num);

    printf("\n....................................");
    printf("\n\nO numero digitado ao quadrado e': %.2f", quad);
    printf("\nO numero digitado ao cubo e': %.2f", cub);
    printf("\nA raiz quadrada do numero digitado e': %.2f", raiz_quad);
    printf("\nA raiz cubica do numero digitado e': %.2f", raiz_cub);
    printf("\n....................................\n\n");

    return 0;
}