    /* Fundamentos da Programação de computadores
    Capitulo 4 -  Condicionais Exercios Resolvidos

    01)  A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho
    de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas
    obedece aos pesos a seguir: 
    
    TRABALHO LABORATÓRIO - 2
    AVALIAÇÃO SEMESTRAL - 3
    EXAME FINAL - 5

    Faça um programa que recebe as 3 notas, calcule e mostre a média ponderada e o conceito que segue a tabela abaixo:

    MEDIA PONDERADA    CONCEITO
    8.0 A 10.0          A
    7.0 A 7.9           B
    6.0 A 6.9           C
    5.0 A 5.9           D
    0.0 A 4.9           E
    
    */

    #include <stdio.h>
    int main() {
        float trab, aval, exame, media;

        printf("\nDigite a nota do trabalho de Laboratorio: ");
        scanf("%f", &trab);
        printf("Digite a nota do Avaliacao Semestral: ");
        scanf("%f", &aval);
        printf("Digite a nota do Exame: ");
        scanf("%f", &exame);

        media = (trab * 2 + aval * 3 + exame * 5) / 10;

        if (media >= 8.0 && media <= 10.0) {
            printf("\n\tConceito A\n");
        } else if (media >= 7.0 && media <= 7.9) {
            printf("\n\tConceito B\n");
        } else if (media >= 6.0 && media <= 6.9) {
            printf("\n\tConceito C\n");
        } else if (media >= 5.0 && media <= 5.9) {
            printf("\n\tConceito D\n");
        } else if (media >= 0.0 && media <= 4.9) {
            printf("\n\tConceito E\n");
        }
        return 0;
    }

