
#include <stdio.h>

int main()
{
    float a, b, result;

    printf("\n\nInforme o valor de a: ");
    scanf("%f", &a);
    printf("Informe o valor de b: ");
    scanf("%f", &b);

    if(b!=0){
        result = a/b;
        printf("\n\nO resultado da divisao: %.2f\n\n", result);
    }
    else{
        printf("\n\nNao foi possivel executar a operacao\n\n");
    }

    return 0;
}