/*2. Faça um programa que receba três notas, calcule e mostre a média aritmética. pag 36

1a SOLUÇÃO:
ALGORITMO
DECLARE nota1, nota2, nota3, media NUMÉRICO
LEIA nota1, nota2, nota3
media <- (nota1 + nota2 + nota3)/3
ESCREVA media
FIM_ALGORITMO.
2a SOLUÇÃO:
ALGORITMO
DECLARE nota1, nota2, nota3, soma, media NUMÉRICO
LEIA nota1, nota2, nota3
soma <- nota1 + nota2 + nota3
media <- soma/3
ESCREVA media
FIM_ALGORITMO.

*/


#include <stdio.h>
int main(void){
    float nota1, nota2, nota3, media;

    printf("Informa a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Informa a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Informa a terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("A media das notas e': %.1f\n", media);
        
    return 0;
}

