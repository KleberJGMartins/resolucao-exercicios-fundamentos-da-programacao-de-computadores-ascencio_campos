/* Atividade 03 – Comandos básicos em C

5) Faça um programa que:
a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
b) Obtenha o valor para a variável VH (valor da hora trabalhada);
c) Obtenha o valor para a variável PD (percentual de desconto);
d) Calcule o salário bruto [SB = HT * VH];
e) Calcule o total de desconto [TD = (PD / 100) * SB];
f) Calcule o salário líquido [SL = SB - TD];
Apresente os valores de horas trabalhadas, salário bruto, desconto e salário líquido. */

#include<stdio.h>
int main(){

    float HT, VH, PD, SB, TD, SL;

    printf("\n\nHoras trabalhadas/Mes (h): ");
    scanf("%f", &HT);
    printf("Valor da Hora trabalhadas (R$): ");
    scanf("%f", &VH);
    printf("Percentual de Desconto Imposto (%%): ");
    scanf("%f", &PD);

    SB = HT * VH;
    TD = (PD / 100) * SB;
    SL = SB - TD;

    printf("\n\n\tHoras trabalhadas/Mes: %.2f horas", HT);
    printf("\n\tSalario Bruto: %.2f reais", SB);
    printf("\n\tDesconto: %.2f reais", TD);
    printf("\n\tSalario Liquido: %.2f reais\n\n", SL);

    return 0;
}