/* Anotações aula 9 USP */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, calcx1, calcx2;

    printf("\n\n---FORMULA DE BASKHARA---");
    printf("\n-----------------------");


    printf("\n\nInforme o valor de a: ");
    scanf("%f", &a);
    printf("Informe o valor de b: ");
    scanf("%f", &b);
    printf("Informe o valor de c: ");
    scanf("%f", &c);

    calcx1 = (-b + sqrt (b*b - 4 * a * c)) / (2 * a);
    calcx2 = (-b - sqrt (b*b - 4 * a * c)) / (2 * a);

    printf("\n\nX1 = %.2f", calcx1);
    printf("\n\nX2 = %.2f\n\n", calcx2);

    return 0;
}