/*1.4 Exemplos de algoritmos
Os exemplos a seguir mostram alguns algoritmos desenvolvidos com os três tipos citados anteriormente.
c) Faça um algoritmo para calcular a média aritmética entre duas notas de um aluno e mostrar sua situação,
que pode ser aprovado ou reprovado.
Algoritmo em descrição narrativa:
Passo 1 — Receber as duas notas.
Passo 2 — Calcular a média aritmética.
Passo 3 — Mostrar a média aritmética.
Passo 4 — Se a média aritmética for maior ou igual a 7, então a situação do aluno é aprovado; caso
contrário, a situação é reprovado.*/


#include <stdio.h>
int main(void) {
    float nota1, nota2, calc;

    printf("Informe a nota 1: ");
    scanf("%f", &nota1);
    printf("Informe a nota 2: ");
    scanf("%f", &nota2);

    calc = (nota1 + nota2) / 2;
    printf("\nSITUACAO DO ALUNO");
    printf("\nNota 1: \t%.1f\nNota 2: \t%.1f\nMedia: \t\t%.1f\n", nota1, nota2, calc);

    if(calc >= 7){        
        printf("\nAluno Aprovado");        
    } else{
        printf("\nAluno Reprovado!");        
    }
    
    return 0;
}