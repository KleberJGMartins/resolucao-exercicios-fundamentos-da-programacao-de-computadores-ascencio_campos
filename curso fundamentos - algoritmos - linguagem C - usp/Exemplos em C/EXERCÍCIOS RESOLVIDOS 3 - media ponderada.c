/*2. 3. Faça um programa que receba três notas e seus respectivos pesos, 
calcule e mostre a média ponderada. pag 36

1a SOLUÇÃO:
ALGORITMO
DECLARE nota1, nota2, nota3, peso1, peso2, peso3, media NUMÉRICO
LEIA nota1, nota2, nota3, peso1, peso2, peso3
media <- (nota 1 * peso 1 + nota 2 * peso 2 + nota 3 * peso3)/(peso 1 + peso 2 + peso 3)
ESCREVA media
FIM_ALGORITMO.

2a SOLUÇÃO:
ALGORITMO
DECLARE nota1, nota2, nota3, peso1, peso2, peso3 NUMÉRICO
soma1, soma2, soma3, total, media NUMÉRICO
LEIA nota1, nota2, nota3, peso1, peso2, peso3
soma1 <- nota1 * peso1
soma2 <- nota2 * peso2
soma3 <- nota3 * peso3
total <- peso1 + peso2 + peso3
media <- (soma1 + soma2 + soma3)/total
ESCREVA media
FIM_ALGORITMO.

OBS. NA MÉDIA PONDERADA TODAS AS AVALIAÇÕES VALEM 10, PORÉM NO TOTAL ESSAS AVALIAÇÕES TEM PESOS DIFERENTES QUE SOMAM 10.
EX: N 10 = P 3; N 10 = P 3; N 10 = P 4.

*/


#include <stdio.h>
int main(void){
    float nota1, nota2, nota3, s1, s2, s3, s4, media;
    float peso1, peso2, peso3, pt;

    printf("----- CALCULO DE MEDIA PONDERADA -----\n\n");

    printf("Informa a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Informa o peso da primeira nota: \n");
    scanf("%f", &peso1);
    printf("Informa a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Informa o peso da segunda nota: \n");
    scanf("%f", &peso2);
    printf("Informa a terceira nota: \n");
    scanf("%f", &nota3);
    printf("Informa o peso da terceira nota: \n");
    scanf("%f", &peso3);

    s1 = nota1 * peso1;
    s2 = nota2 * peso2;
    s3 = nota3 * peso3;
    s4 = s1 + s2 + s3;
    pt = peso1 + peso2 + peso3;

    media = s4 / pt;

    printf("\n----- RESULTADO -----\n\n");

    printf("\n\tNota %.1f\n", media);
        
    return 0;
}

