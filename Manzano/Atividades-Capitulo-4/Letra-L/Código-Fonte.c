#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int Num = 0;
printf("\t\t\t\tCap�tulo 4 - Letra L\n\n");
printf("Digite um n�mero: \n>>> ");
scanf("%i", &Num);
    if (!(Num > 3))
        printf("\nO n�mero digitado foi %i.\n", Num);
    else

 system("\npause\n");
    return 0;
}
