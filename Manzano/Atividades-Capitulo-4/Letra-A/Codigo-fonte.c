#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int A, B, R;

printf("\t\t\t\tCap�tulo 4 - Letra Z\n\n");
printf("Digite uma valor: \n>>> ");
scanf("%i", &A);
printf("\nDigite outro valor: \n>>> ");
scanf("%i", &B);

    if (A > B){
        R = (A - B);
        printf("\nO resultada da difer�n�a entre %i e %i � %i. \n", A, B, R);
    }else{
        R = (B - A);
         printf("\nO resultada da difer�n�a entre %i e %i � %i. \n", B, A, R);
    }

system("\n\npause\n");
    return 0;
}
