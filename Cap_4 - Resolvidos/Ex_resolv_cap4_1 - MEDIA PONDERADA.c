    /* Fundamentos da Programação de computadores
    Capitulo 4 -  Condicionais Exercios Resolvidos

    01)  A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho
    de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas
    obedece aos pesos a seguir: 
    
    TRABALHO LABORATÓRIO - 2
    AVALIAÇÃO SEMESTRAL - 3
    EXAME FINAL - 5
    
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

        printf("\n\tA media final do estudante eh: %.2f\n", media);

        return 0;
    }

