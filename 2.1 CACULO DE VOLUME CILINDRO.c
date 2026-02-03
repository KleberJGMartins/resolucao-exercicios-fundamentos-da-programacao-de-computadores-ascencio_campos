/* 
1) Faça um algoritmo para calcular o volume de uma lata cilíndrica através da seguinte fórmula:
Vol = 3,14. r². h. O algoritmo deve receber o valor do raio (r) e da altura (h) e, após calcular o volume,
mostrar o resultado ao usuário. 
Procure empregar o conceito de constantes e variáveis neste problema.*/

#include<stdio.h>

int main(){

    float raio, pi=3.14, alt, volume;

    printf("\n\nInforme o valor do Raio da lata (cm): ");
    scanf("%f", &raio);
    printf("Informe a altura da lata (cm): ");
    scanf("%f", &alt);

    volume = pi * (raio * raio) * alt;

    printf("\n\n\tO volume da lata e': %.2f cm3\n\n", volume);

    return 0;

}
