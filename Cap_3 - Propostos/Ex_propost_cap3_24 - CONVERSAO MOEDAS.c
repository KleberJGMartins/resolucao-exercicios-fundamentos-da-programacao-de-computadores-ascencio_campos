/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

24) Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. 
Ela vai passar por vários países e precisa converter seu dinheiro em 
dólares, marco alemão e libra esterlina.

Sabe--se que a cotação do 
dólar é de R$ 1,80;
do marco alemão, de R$ 2,00; 
e da libra esterlina, de R$ 3,57. 

O programa deve fazer as conversões e mostrá-las
 */

#include<stdio.h>
int main(){

    float qtd_dinh, dolar, marco, libra;

    printf("\n\n---COTACAO---\n-- dolar R$ 1,80\n-- Marco Alemao R$ 2,00\n-- Libra Esterlina R$ 3,57");

    printf("\n\nInforme a quantidade de Reais a ser convertido: ");
    scanf("%f", &qtd_dinh);

    dolar = qtd_dinh * 1.8;
    marco = qtd_dinh * 2.0;
    libra = qtd_dinh * 3.57;

    printf("\n\n\t--> %.2f reais sao %.2f dolares\n", qtd_dinh, dolar);
    printf("\t--> %.2f reais sao %.2f marcos\n", qtd_dinh, marco);
    printf("\t--> %.2f reais sao %.2f libras\n\n", qtd_dinh, libra);

    return 0;
}