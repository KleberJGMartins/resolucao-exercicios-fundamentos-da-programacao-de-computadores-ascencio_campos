/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

    5) Faça um programa que receba o salário de um funcionário e o percentual de aumento,
    calcule e mostre o valor do aumento e o novo salário.
*/

#include <stdio.h>
int main() {

    float sal, percentual, aumento, novo_sal;

    printf("\n\n---PROGRAMA CALCULO DE NOVO SALARIO---\n");
    printf("--------------------------------------\n\n");

    printf("Informe o salario: ");
    scanf("%f", &sal);
    printf("Informe o percentual de aumento (%%): ");
    scanf("%f", &percentual);

    aumento = sal*percentual/100;
    novo_sal = sal + aumento;
    
    printf("\n\n--------------------------------");
    printf("\nPercentual: %.2f%%", percentual);
    printf("\nValor do aumento: R$%.2f", aumento);
    printf("\nNovo salario: R$%.2f", novo_sal);
    printf("\n--------------------------------");

    return 0;

}