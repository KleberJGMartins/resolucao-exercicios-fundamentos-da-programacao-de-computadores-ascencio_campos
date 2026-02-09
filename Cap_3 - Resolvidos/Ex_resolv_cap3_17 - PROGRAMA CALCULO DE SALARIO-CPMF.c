/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

17) Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois
cheques e agora deseja saber seu saldo atual. 
Sabe-se que cada operação bancária de retirada paga
CPMF de 0,38% e o saldo inicial da conta está zerado..*/

#include <stdio.h>
int main() {

    float sal, cheq1, cheq2, cpmf1, cpmf2, saldo;

    printf("\n\n---CALCULO CHEQUE-CPMF---");

    printf("\nInforme o Salario: R$ ");
    scanf("%f", &sal);
    printf("Informe o valor do cheque 1: R$ ");
    scanf("%f", &cheq1);
    printf("Informe o valor do cheque 2: R$ ");
    scanf("%f", &cheq2);


    cpmf1 = cheq1 * 0.38/100;
    cpmf2 = cheq2 * 0.38/100;
    saldo = sal - cheq1 - cpmf1 - cheq2 - cpmf2;

    printf("\n\n\tVoce recebeu (+): R$ %.2f", sal);
    printf("\n\tCheques emitidos (-): R$ %.2f", (cheq1+cheq2));
    printf("\n\tCPMF (-): R$ %.2f", (cpmf1+cpmf2));
    printf("\n\tO saldo da conta e' (=): %.2f\n\n", saldo);

    return 0;
}