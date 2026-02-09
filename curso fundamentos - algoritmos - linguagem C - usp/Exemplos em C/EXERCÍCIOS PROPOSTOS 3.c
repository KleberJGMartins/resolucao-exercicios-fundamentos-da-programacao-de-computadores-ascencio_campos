/*
3. Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações.

*/


#include <stdio.h>
int main(void){
    int n1, n2, calc;

    printf("--- DIVISOR DE 2 NUMEROS ---\n\n");

    printf("Informe um numero: \n");
    scanf("%d", &n1);
    printf("Informe outro numero (diferente de zero): \n");
    scanf("%d", &n2);

    calc = n1 / n2;

    printf("\n%d / %d = %d\n", n1, n2, calc);    
        
    return 0;
}