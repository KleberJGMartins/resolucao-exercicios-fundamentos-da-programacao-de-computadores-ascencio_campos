/*  Exercícios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

15) O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
distribuidor e dos impostos aplicados ao preço de fábrica. 
Faça um programa que receba 
o preço de fábrica de um veículo, 
o percentual de lucro do distribuidor e 
o percentual de impostos, calcule e mostre:
    a) o valor correspondente ao lucro do distribuidor;
    b) o valor correspondente aos impostos;
    c) o preço final do veículo. */

#include <stdio.h>
int main() {

    float preco_fab, percent_lucro, percent_impost, lucro_distr, impost, preco_final;

    printf("\n\n---eMOTORS VEICULOS---");
    printf("\n.......................\n");

    printf("\nInforme o preco de fabrica: ");
    scanf("%f", &preco_fab);
    printf("Informe o %% de lucro da distribuidora: ");
    scanf("%f", &percent_lucro);
    printf("Informa o %% de impostos: ");
    scanf("%f", &percent_impost);

    lucro_distr = preco_fab * percent_lucro/100;
    impost = preco_fab * percent_impost/100;
    preco_final = preco_fab + lucro_distr + impost;

    printf("\n_______________________________________________________");
    printf("\n\tLucro do distribuidor: R$ %.2f", lucro_distr);
    printf("\n\tImpostos: R$ %.2f", impost);
    printf("\n\tPreco final do veiculo: R$ %.2f", preco_final);
    printf("\n_______________________________________________________\n\n");

    return 0;
}