/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

21) Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar
que distância a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura ema
que deseja pregar o quadro.
Lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcançar. 

 parede
        |               (escada = E)
        | H
        |
        |__________________ D
             chão
           

             Algoritmo DistanciaDaEscada

Variáveis
   escada : real
   altura : real
   distancia : real

Início
   Escreva("Digite o tamanho da escada: ")
   Leia(escada)

   Escreva("Digite a altura em que deseja pregar o quadro: ")
   Leia(altura)

   distancia ← raiz_quadrada(escada^2 - altura^2)

   Escreva("A distância da escada até a parede é: ", distancia)

FimAlgoritmo
           */

#include <stdio.h>
#include <math.h>

int main(){

    float alt, esc, dist;

    printf("\n\n---CALCULO DE DISTANCIA---");
    printf("\n------------------------------");

    printf("\n\nInforme a altura do Quadro (m): ");
    scanf("%f", &alt);
    printf("Informe o tamanho da Escada (m): ");
    scanf("%f", &esc);

    dist = sqrt(esc * esc - alt * alt);

    printf("\n\n\tA distancia entre a escada e a parede e': %.2f metros\n\n", dist);


    return 0;
}