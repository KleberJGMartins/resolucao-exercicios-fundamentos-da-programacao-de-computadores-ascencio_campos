/*1.4 Exemplos de algoritmos
Os exemplos a seguir mostram alguns algoritmos desenvolvidos com os três tipos citados anteriormente.
d) Faça um algoritmo para calcular o novo salário de um funcionário. Sabe-se que os funcionários que
recebem atualmente salário de até R$ 500 terão aumento de 20%; os demais terão aumento de 10%.
Algoritmo em descrição narrativa:
Passo 1 — Receber o salário atual do funcionário.
Passo 2 — Se o salário atual do funcionário for de até R$ 500, calcular o novo salário com percentual
de aumento de 20%; caso contrário, calcular o novo salário com percentual
de aumento de 10%.

ALGORITMO
DECLARE SAL_ATUAL, NOVO_SAL NUMÉRICO
ESCREVA “Digite o salário atual do funcionário”
LEIA SAL_ATUAL
SE SAL_ATUAL ≤ 500
ENTÃO NOVO_SAL <- SAL_ATUAL * 1,20
SENÃO NOVO_SAL <- SAL_ATUAL * 1,10
ESCREVA “Novo salário =”, NOVO_SAL
FIM_ALGORITMO.

*/


#include <stdio.h>
int main(void) {
    float salario, calc;

    printf("---SALARIO DO FUNCIONARIO---\n\n");
    printf("Informe o salario do funcionario: ");
    scanf("%f", &salario);

    
    if(salario <= 500){  
        calc = salario * 1.20; //120/100 = 1.20     
        printf("\nO novo Salario e': %.2f", calc);        
    } else{
        calc = salario * 1.10; //110/100 = 1.10        
        printf("\nO novo Salario e': %.2f", calc);       
    }
    
    return 0;
}