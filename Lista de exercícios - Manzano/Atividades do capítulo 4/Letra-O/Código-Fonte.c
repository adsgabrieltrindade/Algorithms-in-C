#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int Num, R;
printf("\t\t\t\tCap�tulo 4 - Letra O\n\n");
printf("Digite um n�mero:\n>>> ");
scanf("%i", &Num);
R = (Num * 2);
    if (R > 30)
            printf("\nO resultado da multiplica��o de %i por 2 � %i.\n", Num, R);
    else


 system("\npause\n");
    return 0;
}
