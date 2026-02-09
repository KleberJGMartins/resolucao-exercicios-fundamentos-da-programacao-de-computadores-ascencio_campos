/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

    4). Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, 
    sabendo-se que este sofreu um aumento de 25%.
*/

#include <stdio.h>
int main () {

    float sal, novosal;

    printf("\n\n---PROGRAMA NOVO SALARIO---\n");
    printf("Informe o salario do funcionario: ");
    scanf("%f",&sal);

    novosal = sal + (sal*25/100);

    printf("\n-----------------------------------------");
    printf("\nNovo salario com aumento de 25%%: %.2f\n", novosal);
    printf("-----------------------------------------");
    printf("\n\n");

    return 0;
}