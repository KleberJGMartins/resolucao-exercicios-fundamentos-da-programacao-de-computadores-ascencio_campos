/* 
9) Faça um algoritmo que solicite a idade de 4 pessoas. O algoritmo deve calcular a média aritmética das
idades e apresentar o resultado na tela.
*/

#include<stdio.h>
int main(){
    int id1, id2, id3, id4, media;

    printf("\n\nInforme a idade 1: ");
    scanf("%d", &id1);
    printf("Informe a idade 2: ");
    scanf("%d", &id2);
    printf("Informe a idade 3: ");
    scanf("%d", &id3);
    printf("Informe a idade 4: ");
    scanf("%d", &id4);

    media = (id1 + id2 + id3 + id4) / 4;

    printf("\n\n\tA media aritmetica das idade e' de %d anos\n\n", media);
    
    return 0;
}
