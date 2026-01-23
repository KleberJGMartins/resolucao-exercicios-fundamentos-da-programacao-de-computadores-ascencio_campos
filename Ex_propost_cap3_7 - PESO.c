/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

7) Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. */

#include <stdio.h>
int main(){

    float peso, peso_engor, peso_emagr;

    printf("\n\nInforme o Peso (Kg): ");
    scanf("%f", &peso);

    peso_engor = peso + peso * 15/100;
    peso_emagr = peso - peso * 20/100;

    printf("\n\n\t--> O peso com aumento de 15%%: %.2f Kg", peso_engor);
    printf("\n\t--> O peso com reducao de 20%%: %.2f Kg\n\n", peso_emagr);
    

    return 0;
}