#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int A, B, C, R;
printf("\t\t\t\tCap�tulo 4 - Letra N\n\n");
printf("Digite um n�mero:\n>>> ");
scanf("%i", &A);
printf("Digite outro n�mero:\n>>> ");
scanf("%i", &B);
printf("Digite mais um n�mero:\n>>> ");
scanf("%i", &C);
R = (A+B+C);
    if (R >= 100)
            printf("\nO resultado da soma entre os valores fornecidos � %i.\n", R);
    else


 system("\npause\n");
    return 0;
}
