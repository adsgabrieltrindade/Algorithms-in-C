#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main (){

printf("\t\t\t\tLetra N - Cap. 5");
setlocale(LC_ALL, "Portuguese");

int valorLido, media, soma, total, i;
valorLido = media = soma = total = i = 0;
printf("\nDigite n�meros positivos: \n");

do{
    printf(" >>> ");
    scanf("%i", &valorLido);
    soma = soma + valorLido;
    i++;
}while(valorLido>=0);
    media = soma / i;
printf("\nForam lidos no total %i n�meros, sendo o somat�rio %i e a m�dia %i.\n", i, soma, media);
system("\npause\n");
return 0;
}
