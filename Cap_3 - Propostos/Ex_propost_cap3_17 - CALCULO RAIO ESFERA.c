/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

17) Faça um programa que receba o raio, calcule e mostre:
a) o comprimento de uma esfera; sabe-se que C= 2*pi*R
b) a área de uma esfera; sabe-se que A=pi*R^2
c) o volume de uma esfera; sabe-se que V= 3/4 *pi*R^3  --> FORMULA CORRETA V = (4/3) · π · R³*/

#include<stdio.h>
#include<math.h>

int main(){
    float r, comp, area, volume;

    printf("\n\nInforme o Raio da esfera (cm): ");
    scanf("%f", &r);

    comp = 2 * M_PI * r;
    area = M_PI * pow(r,2);
    volume = (4.0/3.0) * M_PI * pow(r,3); // FORMULA DO VOLUME DA ESFERA ESTA ERRADA NO LIVRO. CORRETO --> V = (4/3) · π · R³
    //CUIDADO PARA NÃO COLOCAR 4/3. RETORNA UM NUMERO INTEIRO. PENSE EM (float)4/3 OU (4.0/3.0).
    
    printf("\n\n\tComprimento da Esfera: %.2f cm", comp);
    printf("\n\tArea da Esfera: %.2f cm2", area);
    printf("\n\tVolume da Esfera: %.2f cm3\n\n", volume);

    return 0;
}