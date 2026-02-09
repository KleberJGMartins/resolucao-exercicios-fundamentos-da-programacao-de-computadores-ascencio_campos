/*  Exercicios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

 9. Faça um programa que calcule e mostre a área de um triângulo. 
 Sabe-se que: Área= (base * altura)/2.*/

 #include <stdio.h>
 int main () {

    float base, alt, area;

    printf("\n---AREA DO TRIANGULO---\n");
    printf("-----------------------");

    printf("\n\nInforme a base do triangulo (cm): ");
    scanf("%f", &base);
    printf("Informe a altura do triangulo (cm): ");
    scanf("%f", &alt);

    area = (base * alt)/2;

    printf("\n-----------------------------");
    printf("\nA area do triangulo e': %.2fcm2", area);
    printf("\n-----------------------------\n\n");

    return 0;
 }
