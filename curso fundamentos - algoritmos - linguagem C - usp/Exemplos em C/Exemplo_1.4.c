/*1.4 Exemplos de algoritmos
Os exemplos a seguir mostram alguns algoritmos desenvolvidos com os três tipos citados anteriormente.
a) Faça um algoritmo para mostrar o resultado da multiplicação de dois números.
Algoritmo em descrição narrativa:
Passo 1 — Receber dois números que serão multiplicados.
Passo 2 — Multiplicar os números.
Passo 3 — Mostrar o resultado obtido na multiplicação.*/


#include <stdio.h>
int main(void) {
    int num1, num2, calc;

    printf("Informe o numero 1: ");
    scanf("%d", &num1);
    printf("Informe o numero 2: ");
    scanf("%d", &num2);

    calc = num1 * num2;

    printf("\nO resultado da multiplicacao dos dois numeros e': %d", calc);

    return 0;
}