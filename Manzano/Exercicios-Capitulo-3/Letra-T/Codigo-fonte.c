#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
float DISTANCIA, TEMPO, VELOCIDADE;
DISTANCIA = TEMPO = VELOCIDADE = 0.0;

printf("\t\t\t\tLETRA T\n\n");
printf("Digite a dist�ncia percorrida, em KM, do proj�til: \n>>> ");
scanf("%f", &DISTANCIA);
printf("\nDigite o tempo, em segundos, do percurso do proj�til: \n>>> ");
scanf("%f", &TEMPO);

VELOCIDADE = ((DISTANCIA * 1000) / (TEMPO * 60));

printf("\nA velocidade do proj�til foi de %1.f m/s.\n", VELOCIDADE);

    system("\n\npause\n");
    return 0;
}
