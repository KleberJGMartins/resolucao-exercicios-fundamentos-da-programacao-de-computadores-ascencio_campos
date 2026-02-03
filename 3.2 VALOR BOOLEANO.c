/*
Atividade 03 – Comandos básicos em C
2) Escreva um programa que leia dois valores para duas variáveis (x e y) do tipo float. O programa deve
conter uma variável (result) do tipo int para receber um valor booleano que deve ser apresentada no final
da execução. Utilize a expressão result = (x != y) e observe a saída do programa.
*/

#include<stdio.h>
int main(){

    float x, y;
    int result;

    printf("\n\nInforme um valor para X: ");
    scanf("%f", &x);
    printf("Informe um valor para Y: ");
    scanf("%f", &y);

    result = x != y;

    printf("\n\n\tX e' diferente de Y? se (1), VERDADEIRO, se (0), FALSO:\n\t--> %d\n\n", result);

    return 0;
}