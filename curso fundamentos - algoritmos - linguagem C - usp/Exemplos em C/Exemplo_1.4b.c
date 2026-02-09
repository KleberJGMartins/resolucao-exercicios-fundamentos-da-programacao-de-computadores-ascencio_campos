/*1.4 Exemplos de algoritmos
Os exemplos a seguir mostram alguns algoritmos desenvolvidos com os três tipos citados anteriormente.
b) Faça um algoritmo para mostrar o resultado da divisão de dois números.
Algoritmo em descrição narrativa:
Passo 1 — Receber os dois números que serão divididos.
Passo 2 — Se o segundo número for igual a zero, não poderá ser feita a divisão, pois não existe
divisão por zero; caso contrário, dividir os números e mostrar o resultado da divisão.

ALGORITMO
DECLARE N1, N2, D NUMÉRICO
ESCREVA “Digite dois números”
LEIA N1, N2
SE N2 = 0
ENTÃO ESCREVA “Impossível dividir”
SENÃO INÍCIO
D <- N1/N2
ESCREVA “Divisão = “, D
FIM
FIM_ALGORITMO.*/


#include <stdio.h>
int main(void) {
    float num1, num2, calc;

    printf("Informe o numero 1: ");
    scanf("%f", &num1);
    printf("Informe o numero 2: ");
    scanf("%f", &num2);

    if(num2 != 0){
        calc = num1 / num2;
        printf("\nO resultado da divisao do %.2f pelo %.2f e': %.2f", num1, num2, calc);
        
    } else{
        printf("Nao e' possivel realizar divisao com numero 0!");        
    }
    
    return 0;
}