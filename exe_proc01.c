#include <stdio.h>

void soma (){
    int a, b, result;
    printf ("Valor de a: ");
    scanf  ("%d", &a);
    printf ("Valor de b: ");
    scanf  ("%d", &b);
    result = a + b;
    printf ("\n %d + %d = %d", a, b, result);
}

void subtracao (int a, int x){
    int result = a - x;
    printf ("\n %d - %d = %d", a, x, result);
}

int multiplicacao (int a, int b){
    return a * b;
}

int main (void){
    int op = -1;
    int a, b, r;

    do {
        printf ("\n\n - - - Calculadora do Fiorin - - -\n");
        printf ("1 - Adição\n");
        printf ("2 - Subtração\n");
        printf ("3 - Multiplicação\n");
        printf ("4 - Divisão\n");
        printf ("> ");
        scanf  ("%d", &op);

        switch (op){
        case 1:
            printf ("\n - Adição - \n");
            soma ();
        break;
        
        case 2:
            printf ("\n - Subtração - \n");
            printf ("Valor de a: ");
            scanf  ("%d", &a);
            printf ("Valor de b: ");
            scanf  ("%d", &b);
            subtracao (a, b);
        break;

        case 3:
            printf ("\n - Multiplicação - \n");
            printf ("Valor de a: ");
            scanf  ("%d", &a);
            printf ("Valor de b: ");
            scanf  ("%d", &b);
            r = multiplicacao (a, b);
            printf ("\n %d * %d = %d", a, b, r);
        break;

        case 4:
            /* code */
        break;

        case 0:
            printf ("\nPrograma encerrado.");
        break;

        default:
            printf ("\nErro! Opção inválida.");
        break;
        }
    } while (op != 0);



    puts ("");
    return 0;
}