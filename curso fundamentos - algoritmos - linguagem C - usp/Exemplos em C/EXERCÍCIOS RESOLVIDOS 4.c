/*
4. Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
que este sofreu um aumento de 25%.

1a SOLUÇÃO:
ALGORITMO
DECLARE sal, novosal NUMÉRICO
LEIA sal
novosal <- sal + sal * 25/100
ESCREVA novosal
FIM_ALGORITMO.

2a SOLUÇÃO:
ALGORITMO
DECLARE sal, aumento, novosal NUMÉRICO
LEIA sal
aumento <- sal * 25/100
novosal <- sal + aumento
ESCREVA novosal
FIM_ALGORITMO.

*/

#include <stdio.h>
int main(void){
    float sal, novo_sal, aumento;

    printf("Informe o salario do funcionario: \n");
    scanf("%f", &sal);

    novo_sal = sal + (sal * 25/100);
    aumento = novo_sal - sal;

    printf("O novo salario do funcionario e': %.2f\n", novo_sal);
    printf("Aumento de 25%%: %.2f\n", aumento);

    return 0;
}