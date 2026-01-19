/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

20) Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no
chão e encostada na parede e a altura da parede onde está a ponta da escada. Calcule e mostre a medida dessa escada. 
Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham
com medidas de ângulos em radianos.  
        ._
        | \_
        |   \_ medida da escada
      h |     \_
        |______a\ a = ângulo
          c = chão

          
Passos do programa:
-Ler o ângulo em graus
-Ler a altura da parede
-Converter o ângulo de graus para radianos
-Calcular o seno do ângulo
-Calcular o comprimento da escada
-Mostrar o resultado

** Em C, as funções trigonométricas (sin, cos, tan) trabalham em radianos, não em graus.
A conversão é feita assim:

radianos = graus × 𝜋/180

então: Conhecemos o ângulo, Conhecemos o cateto oposto (altura da parede) e,
Queremos a hipotenusa (escada)

A relação correta é o seno, Calcular o comprimento da escada, Use seno porque temos cateto oposto e hipotenusa:

** sin(𝜃) = cateto oposto/hipotenusa

Substituindo:

** sin(𝜃) = altura/escada

Isolando a escada:

** escada = altura/sin(𝜃)

*/

#include <stdio.h>
#include <math.h>
int main(){

  float ang_graus, alt, escada, ang_rad;

  printf("\n\n---CALCULO DE ANGULO---");
  printf("\n----------------------------");

  printf("\n\nInforme o angulo em graus: ");
  scanf("%f", &ang_graus);
  printf("Informe a altura da parede (m): ");
  scanf("%f", &alt);

  // Conversão de graus para radianos
  ang_rad = ang_graus * M_PI/180;

  // Cálculo do comprimento da escada
  escada = alt / sin(ang_rad);

  printf("\n\n\tA altura da escada e': %.2f metros", escada);
  printf("\n\t----------------------------\n\n");

  return 0;
}        