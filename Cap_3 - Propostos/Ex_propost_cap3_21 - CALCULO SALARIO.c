/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

21) Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
de horas extras trabalhadas, calcule e mostre o salário a receber, seguindo as regras abaixo:
a)a hora trabalhada vale 1/8 do salário mínimo;
b)a hora extra vale 1/4 do salário mínimo;
c)o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
d)a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor
da hora extra;
e)o salário a receber equivale ao salário bruto mais a quantia a receber pela hora extra */

#include<stdio.h>
int main(){
    float num_h_trab, vlr_hora, vlr_sal_min, vlr_sal_brut, num_h_extr, vlr_h_extra, tt_h_extra, sal_receb;
    
    printf("\n\nInforme o numero de horas trabalhadas (h): ");
    scanf("%f", &num_h_trab);
    printf("Informe o valor do salario minimo (R$): ");
    scanf("%f", &vlr_sal_min);
    printf("Informe o numero de horas extras (h): ");
    scanf("%f", &num_h_extr);

    vlr_hora = 1.0/8.0 * vlr_sal_min;
    vlr_h_extra = 1.0/4.0 * vlr_sal_min;
    vlr_sal_brut = num_h_trab * vlr_hora;
    tt_h_extra = num_h_extr * vlr_h_extra;
    sal_receb = tt_h_extra + vlr_sal_brut;

    printf("\n\n\t-->O salario a recebere': %.2f reais\n\n", sal_receb);

    return 0;
}