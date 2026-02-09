/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

14) Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, 
calcule e mostre:
a)a idade dessa pessoa em anos;
b)a idade dessa pessoa em meses;
c)a idade dessa pessoa em dias;
d)a idade dessa pessoa em semanas. */

#include <stdio.h>
int main (){

    int ano_nasc, ano_atual, id_anos, id_meses, id_semanas, id_dias;

    printf("\n\nInforme o ano do seu nascimento: ");
    scanf("%d", &ano_nasc);
    printf("Informe o ano atual: ");
    scanf("%d", &ano_atual);

    id_anos = ano_atual - ano_nasc;
    id_meses = id_anos * 12;
    id_semanas = id_meses * 4;
    id_dias = id_semanas * 7;

    printf("\n\n\tVoce tem %d anos de vida", id_anos);
    printf("\n\tVoce tem %d meses de vida", id_meses);
    printf("\n\tVoce tem %d semanas de vida", id_semanas);
    printf("\n\tVoce tem %d dias de vida\n\n", id_dias);

    return 0;
}