/* 
Atividade 03 – Comandos básicos em C
1) Escreva um programa em C que leia uma temperatura em Fahrenheit e a apresente convertida em graus
Celsius. Fórmula de conversão: C = (F - 32) * (5 / 9).
*/

#include<stdio.h>
int main(){

    float fahr, cels;

    printf("\n\nInforme a temperatura em Fahrenheit (F): ");
    scanf("%f", &fahr);

    cels = (fahr - 32) * (5.0 / 9.0);

    printf("\n\n\tA temperatura convertida e' %.2f Graus Celsius.\n\n", cels);

    return 0;
}