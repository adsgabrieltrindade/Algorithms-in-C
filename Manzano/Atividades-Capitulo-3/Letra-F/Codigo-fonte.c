#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int A1, B1, A2, B2;
A1 = B1 = A2 = B2 = 0;

printf("Digite um valor inteiro para a vari�vel A: \n>>> ");
scanf("%i", &A1);
printf("\nDigite agora para a vari�vel B: \n>>> ");
scanf("%i", &B1);
printf("\nO valor digitado para a vari�vel A foi %i e para a vari�vel B foi %i.", A1, B1);
printf("\nFazendo a troca ...\n");

A2 = A1;
B2 = B1;
    A1 = B1 = 0;
A1 = B2;
B1= A2;

printf("\nO valor da vari�vel A agora � %i e da vari�vel B � %i. \n", A1, B1);

    system("\npause");
    return 0;
}
