/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

25) Faça um programa que receba o custo de um espetáculo teatral e 
o preço do convite desse espetáculo.
Esse programa deverá calcular e mostrar 
a quantidade de convites que devem ser vendidos para que, 
pelo menos, o custo do espetáculo seja alcançado.*/

#include <stdio.h>

int main(){

    float custo_esp, preco_conv, qtd;
    
    printf("\n\n---CALCULO QUATIDADE CONVITES---");
    printf("\n-----------------------------------");

    printf("\n\nInforme o custo do espetaculo (R$): ");
    scanf("%f", &custo_esp);
    printf("Informe o valor do convite (R$): ");
    scanf("%f", &preco_conv);

    qtd = custo_esp / preco_conv; //Dividimos o custo do espetaculo pelo preço do convite.

    printf("\n\n\t--> Sera preciso vender %.0f convites.\n\n", qtd);

    return 0;
}