#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int Num = 0;
printf("\t\t\t\tCap�tulo 4 - Letra K\n\n");
printf("Digite um n�mero: \n>>> ");
scanf("%i", &Num);
                                                    //Utilizei operador ten�rio aqui para facilitar
    (1<=Num && Num<=9) ? printf("\nO n�mero est� na faixa permitida.\n") : printf("\nO n�mero est� fora da faixa permitida.\n");

 system("\npause\n");
    return 0;
}
