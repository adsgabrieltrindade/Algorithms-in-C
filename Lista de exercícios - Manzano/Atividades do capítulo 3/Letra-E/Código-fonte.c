#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

float V, TX, TMP, PST;
//V = TX = TMP = PST = 0.0;
printf("\t\t\t\tPresta��o em atraso");

printf("\n\nDigite o valor da presta��o: \n>>> ");
scanf("%f", &V);
printf("\nDigite a taxa da presta��o: \n>>> ");
scanf("%f", &TX);
printf("\nDigite o tempo da presta��o: \n>>> ");
scanf("%f", &TMP);

PST = (V+(V*(TX/100)*TMP));

printf("\nO valor da presta��o em atraso � de R$%1.f", PST);


    return 0;
}
