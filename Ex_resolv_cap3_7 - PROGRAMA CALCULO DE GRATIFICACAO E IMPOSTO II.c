/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

    7. Faça um programa que receba o salário base de um funcionário, 
    calcule e mostre seu salário a receber, 
    sabendo-se que o funcionário tem gratificação de R$ 50 e 
    paga imposto de 10%
*/

#include <stdio.h>
int main() {

    float sal, sal_receber, grat=50, impost;

    printf("\n___CALCULO DE SALARIO A RECEBER___\n");
    printf("___________________________________\n\n");

    printf("Informe o salario do funcionario: R$ ");
    scanf("%f", &sal);


    impost = sal*10/100;
    sal_receber = sal + grat - impost;

    printf("___________________________________\n");
    printf("Salario base:........R$ %.2f\n", sal);
    printf("Gratificacao:....(+) R$ %.2f\n", grat);
    printf("Imposto 10%%:.....(-) R$ %.2f\n", impost);
    printf("Salario liquido:.(=) R$ %.2f\n", sal_receber);
    printf("___________________________________\n");

    return 0;
}