#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
float C, L, H, V;
C = L = H = V = 0.0;

printf("\nDigite o comprimento do ret�ngulo em cent�metros: \n>>> ");
scanf("%f", &C);
printf("\nDigite a largura do ret�ngulo em cent�metros: \n>>> ");
scanf("%f", &L);
printf("\nDigite a altura do ret�ngulo em cent�metros: \n>>> ");
scanf("%f", &H);

V = (C * L * H);

printf("\nO volume do ret�ngulo � %1.f cent�metros c�bicoss.\n", V);

    system("\npause");
    return 0;
}
