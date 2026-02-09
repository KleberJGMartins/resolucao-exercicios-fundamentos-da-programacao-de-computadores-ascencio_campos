/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

25) Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e mostre:
a)a hora digitada convertida em minutos;
b)o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
c)o total dos minutos convertidos em segundos
*/

#include<stdio.h>
int main(){

    int hora, min, hora_min, total_min, seg;

    printf("\n\nInforme a hora: ");
    scanf("%d", &hora);
    printf("Informe os minutos: ");
    scanf("%d", &min);

    hora_min = hora * 60;
    total_min = hora_min + min;
    seg = total_min * 60;

    printf("\n\n%d h sao %d minutos",hora, hora_min);
    printf("\nO tempo total possui %.d minutos",total_min);
    printf("\nO tempo total possui %d segundos\n\n", seg);

    return 0;
}