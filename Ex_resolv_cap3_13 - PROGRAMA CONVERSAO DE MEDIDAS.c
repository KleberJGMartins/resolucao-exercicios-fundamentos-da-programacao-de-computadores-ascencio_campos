/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

13) Sabe-se que: pé = 12 polegadas, 1 jarda = 3 pés, 1 milha = 1,760 jarda.
Faça um programa que receba uma medida em pés, 
faça as conversões a seguir e mostre os resultados. 
a) polegadas; 
b) jardas; 
c) milhas.  
*/

#include <stdio.h>
int main() {

    float num, pol, jar, mil;

    printf("\n\n---CONVERSAO DE MEDIDAS---");
    printf("\n...............................");

    printf("\n\nInforme a medida em (pes): "); // exemplo comentado com uma entrada de 5 pés.
    scanf("%f", &num);

    pol = num * 12;     //polegada = 5 × 12 = 60
    jar = num / 3;      //jarda = 5 ÷ 3 ≈ 1.67
    mil = jar / 1760;   //milha = 1.67 ÷ 1760 ≈ 0.000947

    printf("\n....................................");
    printf("\n%.0f pes corresponde a: %.2f polegadas", num, pol);
    printf("\n%.0f pes corresponde a: %.2f jardas", num, jar);
    printf("\n%.0f pes corresponde a: %.6f milhas", num, mil);
    printf("\n....................................");

    return 0;
}
