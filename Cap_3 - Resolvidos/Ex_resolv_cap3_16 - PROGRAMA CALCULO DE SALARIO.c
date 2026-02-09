/*  Exercicios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

16) Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e
mostre o salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto.*/

#include <stdio.h>
int main() {

    float h_trab, sal_min, sal_liq, vlr_h, sal_brut, perc_imp;

    printf("\n\n---SALARIO_TRABALHADOR---");
    printf("\n-----------==------------");

    printf("\n\nInforme o numero de horas trabalhadas: ");
    scanf("%f", &h_trab);
    printf("Informe o valor do salario minimo: ");
    scanf("%f", &sal_min);

    vlr_h = sal_min / 2;
    sal_brut = h_trab * vlr_h;
    perc_imp = sal_brut * 3/100;
    sal_liq = sal_brut - perc_imp;
    
    printf("\n--------------==---------------");
    printf("\n\tSalario liquido: %.2f", sal_liq);
    printf("\n-------------==---------------\n\n");

    return 0;
}