/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

6) Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final. */ 

#include <stdio.h>
int main(){
    float sal_fixo, comiss=0.04, vlr_vendas, vlr_comiss, sal_final;

    printf("\n\nInforme o Salario (R$): ");
    scanf("%f", &sal_fixo);
    printf("Informe o Valor das Vendas (R$): ");
    scanf("%f", &vlr_vendas);

    vlr_comiss = vlr_vendas * comiss;
    sal_final = sal_fixo + vlr_comiss;

    printf("\n\n\t--> Salario Fixo: %.2f reais", sal_fixo);
    printf("\n\t--> Comissao de 4%% das vendas: %.2f reais", vlr_comiss);
    printf("\n\t--> Salario Final: %.2f reais\n\n", sal_final);
    
    return 0;
}
