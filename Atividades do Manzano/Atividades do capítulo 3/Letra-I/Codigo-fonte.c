#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int N, N2;
    N = N2 = 0;

    printf("\nDigite um n�mero: \n>>> ");
    scanf("%i", &N);
    N2 = (N*N);
    printf("\nO quadrado do n�mero %i � %i. \n", N, N2);
    system("\npause");
    return 0;
}
