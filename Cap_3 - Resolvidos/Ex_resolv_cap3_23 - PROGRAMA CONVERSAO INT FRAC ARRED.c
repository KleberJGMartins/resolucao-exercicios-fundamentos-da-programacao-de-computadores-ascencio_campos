/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

23) Faça um programa que receba um número real, encontre e mostre:
a) a parte inteira desse número;
b) a parte fracionária desse número;
c) o arredondamento desse número. */

#include <stdio.h>
#include <math.h>

int main(){

    float num, i, f;
    int arred;

    printf("\n\n---CONVERSAO NUM INT FRAC ARRED---");
    printf("\n______________________________");

    printf("\n\nInforme um numero real: ");
    scanf("%f", &num);

    i = (int) num;
    f = num - i;
    arred = round (num); //'round' necessita da biblioteca math.h

    printf("\n\n\ta parte inteira de %.2f e' %.0f", num, i);
    printf("\n\ta parte fracionaria de %.2f e' %.2f", num, f);
    printf("\n\to arredondamento de %.2f e' %d\n\n", num, arred);

    return 0;
}