/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

22. Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que receba
o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. Calcule e
mostre:
a) o valor de cada quilowatt;
b) o valor a ser pago por essa residência;
c) o valor a ser pago com desconto de 15%. */

#include <stdio.h>

int main(){

    float vlr_sal, vlr_kw, vlr_pg, vlr_des, qtd_kw;

    printf("\n\n---CALCULO DE ENERGIA---");
    printf("\n----------------------------");

    printf("\n\nInforme o valor do Salario minimo (R$): ");
    scanf("%f", &vlr_sal);
    printf("Informe a Quantidade de KW consumida: ");
    scanf("%f", &qtd_kw);

    vlr_kw = vlr_sal / 5;
    vlr_pg = vlr_kw * qtd_kw;
    vlr_des = vlr_pg - vlr_pg * 15 / 100;

    printf("\n\n\t--O KW de energia custa %.2f reais", vlr_kw);
    printf("\n\t--O valor total do consumo e' de %.2f reais", vlr_pg);
    printf("\n\t--Pague ate o vencimento com desconto de 15%% o valor de %.2f reais\n\n", vlr_des);



    return 0;
}