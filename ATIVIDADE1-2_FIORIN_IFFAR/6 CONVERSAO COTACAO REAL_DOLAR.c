/* 6) Escreva um algoritmo que receba um valor em Real e a cotação do Dólar, calcule a conversão do valor e,
como saída, apresente o valor a ser convertido (R$), a cotação do Dólar e o valor da conversão ($).
Exemplo:

Entrada:
Informe a cotação do Dólar: 3,81
Informe a quantidade de Reais a ser convertida: 15

Saída:
Cotação do Dólar: R$ 3,81
Valor em Real: R$ 15,00
Valor em Dólar: $ 3,93 */ 

#include<stdio.h>
int main(){

    float vlr_R, cot_dolar, conversao;

    printf("\n\nInforme o valor em (R$): ");
    scanf("%f", &vlr_R);
    printf("Informe a cotacao do dolar (R$): ");
    scanf("%f", &cot_dolar);

    conversao = vlr_R / cot_dolar;

    printf("\n\n\tValor: R$ %.2f", vlr_R);
    printf("\n\tCotacao: R$ %.2f", cot_dolar);
    printf("\n\tValor em dolar: $ %.2f\n\n", conversao);

    return 0;
}
