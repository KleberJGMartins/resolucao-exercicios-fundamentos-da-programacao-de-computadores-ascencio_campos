/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

10. Faça um programa que calcule e mostre a área de um círculo. 
Sabe-se que: Área = pi* R2. */

/* 
#include <stdio.h>
int main() {

    float pi=3.1415, raio, area;

    printf("\n\n---CALCULO DE AREA DO CIRCULO---");
    printf("\n---------------------------");

    printf("\n\nInforme o raio do circulo (cm): ");
    scanf("%f", &raio);

    area = pi * (raio*raio);

    printf("\n---------------------------");
    printf("\nA area do circulo e': %.2fcm2", area);
    printf("\n---------------------------\n");

    return 0;
}
    */


#include <stdio.h>
#include <math.h> // utilizando a biblioteca math.h

int main() {

    float raio, area, x, y;

    printf("\n\n---CALCULO DE AREA DO CIRCULO---");
    printf("\n---------------------------");

    printf("\n\nInforme o raio do circulo (cm): ");
    scanf("%f", &raio);
    printf("Para saber y, informe o valor de x: ");
    scanf("%f", &x);

    area = M_PI * (raio*raio); //M_PI função da biblioteca math.h
    y = exp(x);

    printf("\n---------------------------");
    printf("\nA area do circulo e': %.2fcm2", area);
    printf("\nO valor de 'Euler' no expoente x e': %.3f", y); // valor da constante 'e' Euler. 2.718...
    printf("\n---------------------------\n");

    return 0;
}