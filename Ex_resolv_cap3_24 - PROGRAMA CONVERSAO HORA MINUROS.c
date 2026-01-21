/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

24) Faça um programa que receba uma hora formada por hora e minutos (um número real),
calcule e mostre a hora digitada apenas em minutos. Lembre-se de que:
    ■ para quatro e meia, deve-se digitar 4.30;
    ■ os minutos vão de 0 a 59.*/

#include <stdio.h>
int main(){

    float hora, h, m, conver;

    printf("\n\n---CONVERCAO HORA/MIN");
    printf("\n--------------------------");

    printf("\n\nInforme a hora (0.00): ");
    scanf("%f", &hora);

    h = hora;
    hora = (int) hora; //separar a parte inteira da hora
    m = (h - hora) * 100; //hora - a parte inteira * 100 minutos;
    conver = (hora * 60) + m; //hora * 60 minutos + minutos
    
    printf("\n\n\t--> A hora informada tem um total de %.0f minutos\n\n", conver);

    return 0;
}