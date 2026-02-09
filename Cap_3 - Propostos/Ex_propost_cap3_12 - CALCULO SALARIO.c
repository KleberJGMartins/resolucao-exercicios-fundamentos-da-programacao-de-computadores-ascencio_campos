/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

12) Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
e mostre a quantidade de salários mínimos que esse funcionário ganha. */

#include <stdio.h>
int main(){
    float sal_min, salario, qtd_sal;

    printf("\n\nInforme o valor do Salario Minimo (R$): ");
    scanf("%f", &sal_min);
    printf("Informe o Salario do Funcionario (R$): ");
    scanf("%f", &salario);

    qtd_sal = salario / sal_min;
    
    printf("\n\n\t--> O funcionario recebe %.2f salarios minimos.\n\n", qtd_sal);

    return 0;
}