/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

20) Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a dis-
tância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar
sua ponta  

Passos do programa:
-Ler o ângulo em graus
-Ler a distancia entre o pé da escada e a parede
-Converter o ângulo de graus para radianos
-Calcular o seno do ângulo
-Calcular o comprimento da escada
-Mostrar o resultado

** Em C, as funções trigonométricas (sin, cos, tan) trabalham em radianos, não em graus.
A conversão é feita assim:

radianos = graus × 𝜋/180

então: Conhecemos o ângulo, Conhecemos o cateto adjacente (distancia da parede) e,
Queremos a hipotenusa (escada)

A relação correta é o Cosseno, Calcular o comprimento da escada, Use Cosseno porque temos cateto adjacente e hipotenusa:

A função que liga esses três é o cosseno:

cos(θ) = adjacente / hipotenusa

Substituindo:

** cos(𝜃) = distancia/escada

Isolando a escada:

** escada = distancia/cos(𝜃)

*/

#include<stdio.h>
#include<math.h>

int main(){

    float ang_grau, ang_rad, dist, escada;
    
    printf("\n\nInforme o angulo da escada (graus): ");
    scanf("%f", &ang_grau);
    printf("Informe a distancia entre o pe da escada e a parede (m): ");
    scanf("%f", &dist);

    // Conversão de graus para radianos
    ang_rad = ang_grau * M_PI / 180; //radianos = graus × 𝜋/180

    // Cálculo do comprimento da escada
    escada = dist / cos(ang_rad);

    printf("\n\n\tO comprimento da escada e': %.2f metros\n\n", escada);
    
    return 0;
}