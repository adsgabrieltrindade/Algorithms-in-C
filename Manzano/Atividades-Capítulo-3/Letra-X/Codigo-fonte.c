#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
float B, E, R;

printf("\t\t\t\tLETRA X\n\n");
printf("Digite o �ndice da raiz: \n>>> ");
scanf("%f", &E);
printf("Digite o valor da base a ser calculada com o �ndice %1.f: \n>>> ", E);
scanf("%f", &B);
R = (pow(B, 1/E));

printf("\nA raiz de %1.f de �ndice %1.f � %1.f. \n", B, E, R);
system("\n\npause\n");
    return 0;
}
