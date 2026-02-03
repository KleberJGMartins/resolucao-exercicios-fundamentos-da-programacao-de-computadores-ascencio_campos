/*
8) Escreva um algoritmo que peça para o usuário informar a sua idade e, em seguida, calcule e apresente o
dobro e o triplo da idade informada.
*/

#include<stdio.h>
int main(){

    int idade, dobro, triplo;

    printf("\n\nInforme a idade: ");
    scanf("%d", &idade);

    dobro = idade * 2;
    triplo = idade * 3;

    printf("\n\n\tO dobro de %d anos e' %d anos", idade, dobro);
    printf("\n\tO triplo de %d anos e' %d anos\n\n", idade, triplo);

    return 0;
}
