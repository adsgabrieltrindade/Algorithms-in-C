#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main (){

printf("\t\t\t\tLetra L - Cap. 5");
setlocale(LC_ALL, "Portuguese");

int valorLido, i, fat, somaTotal, cont;
valorLido  = somaTotal = 0; fat = i = cont=1;
printf("\nDigite 15 n�meros inteiros: \n");

do{
        printf("\n%i� >>> ", i);
        scanf("%i", &valorLido);

            for (cont = 1, fat = 1; cont <= valorLido; cont++)
                fat = fat * cont;
        somaTotal = fat + somaTotal;
   i++;
}while(i<=15);

printf("\nO valor do somat�rio do fatorial dos 15 n�meros inseridos � %i.\n", somaTotal);
system("\npause\n");
return 0;
}
