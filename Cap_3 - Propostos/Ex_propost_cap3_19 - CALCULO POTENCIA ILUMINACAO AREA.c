/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

19) Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18W
de potência. 
Faça um programa que receba as duas dimensões de um cômodo (em metros), 
calcule e mostrea sua área (em m2) e a potência de iluminação que deverá ser utilizada  */

#include<stdio.h>

int main(){
    float m2=18, dim1, dim2, area, pot_W;

    printf("\n\n--> CADA COMODO NECESSITA DE 18W DE POTENCIA POR m2 NA ILUMINACAO");

    printf("\n\nInforme a dimensao 1 do comodo (m): ");
    scanf("%f", &dim1);
    printf("Informe a dimensao 2 do comodo (m): ");
    scanf("%f", &dim2);

    area = dim1 * dim2;
    pot_W = area * m2;

    printf("\n\n\tO comodo possui %.2f m2", area);
    printf("\n\tSao necessarios %.2f W de potencia para iluminar este comodo.\n\n", pot_W);

    return 0;
}