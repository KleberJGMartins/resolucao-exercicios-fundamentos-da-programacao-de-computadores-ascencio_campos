/* 
2) Escreva um algoritmo para ler dois valores para as variáveis A e B. 
O algoritmo deve efetuar a troca dos valores, 
de forma que a variável A passe a possuir o valor de B e 
a variável B passe a possuir o valor de A. 
O algoritmo deve apresentar os valores ao usuário, antes e depois da troca. */

#include<stdio.h>
int main(){
    int vlr_a, vlr_b, troca;

    printf("\n\nInforme o valor de A: ");
    scanf("%d", &vlr_a);
    printf("Informe o valor de B: ");
    scanf("%d", &vlr_b);

    printf("\n\nVALORES ANTES DA TROCA");
    printf("\nVALOR DE A: %d", vlr_a);
    printf("\nVALOR DE B: %d", vlr_b);

    troca = vlr_a;
    vlr_a = vlr_b;
    vlr_b = troca;

    printf("\n\nVALORES APOS A TROCA");
    printf("\nVALOR DE A: %d", vlr_a);
    printf("\nVALOR DE B: %d\n\n", vlr_b);

    return 0;
}


