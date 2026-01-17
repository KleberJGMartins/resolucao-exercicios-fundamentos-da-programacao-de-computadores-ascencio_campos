/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

    6)Faça um programa que receba o salário base de um funcionário, 
    calcule e mostre o salário a receber, 
    sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e 
    paga imposto de 7% também sobre o salário base.
*/

#include <stdio.h>
int main() {

    float sal, sal_receber, grat, impost;

    printf("\n---CALCULO DE SALARIO A RECEBER---\n");
    printf("Gratificacao: (+) 5%%\n");
    printf("Imposto: (-) 7%%\n");
    printf("----------------------------------\n\n");

    printf("Informe o salario do funcionario: R$ ");
    scanf("%f", &sal);

    grat = sal*5/100;
    impost = sal*7/100;
    sal_receber = sal + grat - impost;

    printf("\n----------------------------------\n");
    printf("Salario liquido: R$ %.2f\n", sal_receber);
    printf("----------------------------------\n\n");


    return 0;
}