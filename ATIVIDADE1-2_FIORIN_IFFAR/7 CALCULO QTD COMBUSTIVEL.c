/* 
7) Desenvolva um algoritmo para calcular a quantidade de litros de combustível que um automóvel que faz
média de 12Km/L precisa para uma viagem. O usuário deve informar a distância do trajeto e o algoritmo
deve calcular a quantidade de litros através da seguinte fórmula: LitrosUsados = distância / 12 
*/ 

#include<stdio.h>
int main(){
    float dist, media = 12.0, qtd_litros;

    printf("\n\nInforme a distancia do trajeto (Km): ");
    scanf("%f", &dist);

    qtd_litros = dist / media;

    printf("\n\nA quantidade de litros necessarios para percorrer %.2f Km e': %.2f litros\n\n", dist, qtd_litros);


    return 0;
}