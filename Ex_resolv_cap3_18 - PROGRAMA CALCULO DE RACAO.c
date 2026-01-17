/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

18) Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a
mesma. 
Faça um programa que receba o peso do saco de ração e 
a quantidade de ração fornecida para cada gato, 
calcule e mostre quanto restará de ração no saco após cinco dias.*/

#include <stdio.h>
int main () {

    float peso_sc, gato1, gato2, saldo;

    printf("\n\n---CALCULO CONSUMO RACAO---");

    printf("\n\nSaco de racao (Kg): ");
    scanf("%f", &peso_sc);
    printf("Qtd racao gato 1 (g): ");
    scanf("%f", &gato1);
    printf("Qtd racao gato 2 (g): ");
    scanf("%f", &gato2);

    gato1 = gato1 / 1000;
    gato2 = gato2 / 1000;
    saldo = peso_sc - 5 * (gato1 + gato2);

    printf("\n\n\tO saldo de racao apos 5 dias e': %.2f Kg\n\n", saldo);

    return 0;
}