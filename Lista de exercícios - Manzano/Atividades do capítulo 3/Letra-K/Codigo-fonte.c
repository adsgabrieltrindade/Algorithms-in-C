#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
float US, cotUS, BR;
US = cotUS = BR = 0;

printf("\nDigite a quantidade de d�lares a serem convertidos: \n>>> ");
scanf("%f", &US);
printf("\nDigite a cota��o atual do d�lar: \n>>> ");
scanf("%f", &cotUS);

BR = (US*cotUS);

printf("\nO valor de US$%1.f � equivalente a R$%1.f\n", US, BR);

    system("\npause");
    return 0;
}
