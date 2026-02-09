/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

02) Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem
constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão
tirar para serem aprovados, considerando que a média exigida é 6,0.

MÉDIA ARITMÉTICA
>=0 e < 3 - Reprovado
>=3 e < 7 - Exame
>=7 e <= 10 - Aprovado
*/

#include <stdio.h>
int main() {

  float nota1, nota2, nota3, media, exame;

  printf("\n\nInforme a nota 1 do aluno: ");
  scanf("%f", &nota1);
  printf("Informe a nota 2 do aluno: ");
  scanf("%f", &nota2);
  printf("Informe a nota 3 do aluno: ");
  scanf("%f", &nota3);

  media = (nota1 + nota2 + nota3) / 3;

  printf("\n\n---MEDIA ARITMETICA---");
  printf("\n>=0 e < 3 - Reprovado");
  printf("\n>=3 e < 7 - Exame");   
  printf("\n>=7 e <= 10 - Aprovado");
  printf("\n-----------------------");

  printf("\n\n\tMedia: %.2f", media);

  if (media >= 0 && media < 3) {
    printf("\n\tReprovado\n\n");
  } else if (media >= 3 && media < 7) {
    printf("\n\tExame\n");
    exame = 12 - media;
    printf("\tAtencao... Deve tirar nota %.2f para ser aprovado\n\n", exame);
  } else if (media >= 7 && media <= 10) {
    printf("\n\tAprovado\n\n");
  }
  return 0;
}