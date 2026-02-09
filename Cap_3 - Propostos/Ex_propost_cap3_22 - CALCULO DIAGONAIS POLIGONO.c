/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

22) Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número
de diagonais desse polígono. 
Sabe-se que ND = N * (N−3)/2, em que N é o número de lados do polígono */

#include<stdio.h>

int main(){

    int num_diag, num_lados;

    printf("\n\nInforme o numero de lados do poligono: ");
    scanf("%d", &num_lados);

    num_diag = num_lados * (num_lados - 3) / 2;

    printf("\n\n\t--> O numero de diagonais do poligono e': %d\n\n", num_diag);

    return 0;
}