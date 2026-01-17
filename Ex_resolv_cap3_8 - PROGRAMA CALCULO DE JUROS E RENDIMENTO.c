/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

 8) Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
valor do rendimento e o valor total depois do rendimento.*/

#include <stdio.h>
int main() {

        float depos, tx_juro, rend, total;

    printf("\n---CALCULO DE JUROS E RENDIMENTOS---\n");
    printf("------------------------------------\n");

    printf("\nInforme o valor do deposito (R$): ");
    scanf("%f", &depos);
    printf("Informe a taxa de juros (%%): ");
    scanf("%f", &tx_juro);

    rend = depos * tx_juro/100;
    total = depos + rend;

    printf("\nVoce depositou: R$ %.2f", depos);
    printf("\nSeu deposito rendeu: %.2f", rend);
    printf("\nAgora voce tem: R$ %.2f", total); 
    printf("\n-------------------------------\n\n");

    return 0;
}