#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int A, B, R;
A = B = 0;
printf("\nDigite o 1� valor: \n>>> ");
scanf("%i", &A);
printf("\nDigite o 2� valor: \n>>> ");
scanf("%i", &B);

R = ((A*A) - 2*A*B + (B*B));

printf("\nO o quadrado da diferen�a dos valores s�o %i.\n", R);

    system("\npause");
    return 0;
}
