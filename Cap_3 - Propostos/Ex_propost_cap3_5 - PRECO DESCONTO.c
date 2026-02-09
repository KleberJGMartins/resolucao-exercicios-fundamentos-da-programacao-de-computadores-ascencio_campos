/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

5) Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%.*/

#include <stdio.h>
int main(){

    float preco, desc, preco_novo;

    printf("\n\nInforme o preco do produto (R$): ");
    scanf("%f", &preco);

    desc = preco * 10/100;
    preco_novo = preco - desc;
    
    printf("\n\n\t--> O preco com desconto de 10%% e': %.2f reais\n\n", preco_novo);

    return 0;
}