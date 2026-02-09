/*
Atividade 03 – Comandos básicos em C
3) Faça um programa que leia a velocidade de um veículo em Km/H e calcule e imprima a velocidade em
m/s.

Obs.: 
FORMULA --> Vm/s = Vkm/h * 1000 / 3600;
VKm/h --> valor recebido pelo usuario;
1000 --> constante refer a 1Km em metros;
3600 --> contante refer a 1h em segundos;

*PARA FAZER O CONTRARIO: 
Vm/s * 3600 / 1000 = Vkm/h
*/

#include<stdio.h>
int main(){

    float velo_km, velo_m;

    printf("\n\nInforme a velocidade em (Km/h): ");
    scanf("%f", &velo_km);

    velo_m = velo_km * 1000 / 3600; //velocidade * 1000 pra converter em metros e dividido por 3600 pra converter em segundos.

    printf("\n\n\tA velocidade informada e': %.2f m/s\n\n", velo_m);

    return 0;
}