/*
Atividade 03 – Comandos básicos em C

4) Escreva um programa que receba dois números reais, faça uma divisão entre eles e mostre na tela o divisor,
o dividendo, o quociente e o resto da divisão.

Obs.: LOGICA
Como os números são reais:
Não podemos usar %;
Não usamos if;

Vamos usar só:
divisão /;
conversão para int;
fórmula do resto;

A lógica será:

quociente = dividendo ÷ divisor
parteInteira = (int) quociente
resto = dividendo − (divisor × parteInteira)

Tudo sem decisão.
*/

#include<stdio.h>
int main(){

    float dividendo, divisor, quocient, resto;
    int part_int;

    printf("\n\nDigite o Dividendo: ");
    scanf("%f", &dividendo);
    printf("Digite o Divisor (diferente de zero): ");
    scanf("%f", &divisor);

    quocient = dividendo / divisor; // Divisão
    part_int = (int) quocient; // Parte inteira do quociente
    resto = dividendo - (divisor * part_int); // Cálculo do resto

    printf("\n\n\tDividendo: %.2f", dividendo);
    printf("\n\tDivisor: %.2f", divisor);
    printf("\n\tQuociente: %.2f", quocient);
    printf("\n\tResto: %.2f\n\n", resto);
    
    return 0;
}

