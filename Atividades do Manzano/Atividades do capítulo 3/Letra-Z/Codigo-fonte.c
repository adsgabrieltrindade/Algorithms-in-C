#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int A, B, D, Q;

printf("\t\t\t\tLETRA Z\n\n");
printf("Digite o primeiro n�mero: \n>>> ");
scanf("%i", &A);
printf("Digite o segundo n�mero: \n>>> ");
scanf("%i", &B);
D = (A / B);
Q = (pow(D, 2));
printf("\nO quadrado da divis�o entre o primeiro valor %i e o segundo valor %i � %i. \n", A, B, Q);
system("\n\npause\n");
    return 0;
}
