/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

16) Faça um programa que receba o valor dos catetos de um triângulo, 
calcule e mostre o valor da hipotenusa.
a² = b² + c²
*/

#include <stdio.h>
#include <math.h>

int main(){

    float cat_adj, cat_opo, hip;

    printf("\n\nInforme o valor do Cateto Adjacente (cm): ");
    scanf("%f", &cat_adj);
    printf("Informe o valor do Cateto Oposto (cm): ");
    scanf("%f", &cat_opo);

    hip = pow(cat_adj,2) + pow(cat_opo,2);
    hip = sqrt(hip);

    printf("\n\n\tO valor da Hipotenusa e': %.2f cm\n\n", hip);

    return 0;
}