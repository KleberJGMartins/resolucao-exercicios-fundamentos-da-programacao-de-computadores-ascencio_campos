/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

 15) João recebeu seu salário e precisa pagar duas contas atrasadas. 
 Em razão do atraso, ele deverá pagar multa de 2% sobre cada conta. 
 Faça um programa que calcule e mostre quanto restará do salário de João */

 #include <stdio.h>
 int main (){

    float sal, conta1, conta2, pg1, pg2, multa = 0.02, saldo;
    
    printf("\n\nInforme o Salario recebido (R$): ");
    scanf("%f", &sal);
    printf("Informe o valor da primeira conta (R$): ");
    scanf("%f", &conta1);
    printf("Informe o valor da segunda conta (R$): ");
    scanf("%f", &conta2);

    pg1 = conta1 + conta1 * multa;
    pg2 = conta2 + conta2 * multa;
    saldo = sal - pg1 - pg2;

    printf("\n\n\tO saldo e': %.2f reais\n\n", saldo);

    return 0;
 }