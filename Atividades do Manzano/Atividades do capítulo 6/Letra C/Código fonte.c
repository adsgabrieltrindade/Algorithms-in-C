#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\tCap�tulo 6 - Letra C\n\n");

    float arrayA[20], arrayB[20], arrayC[20];  int i = 0;
    printf("\nDigite 20 elementos para a matriz A: \n");
    for(i = 0; i<20; i++){
        printf("%i� >>> ", i);
        scanf("%f", &arrayA[i]);}
    printf("\nAgora digite mais 20 elementos para a matriz B: \n");
    for(i = 0; i<20; i++){
        printf("%i� >>> ", i);
        scanf("%f", &arrayB[i]);}
    for(int linha = 0; linha<=120; linha++) //Este la�o � para criar uma linha de separa��o entre os comandos de entrada
        printf("-");                        //e sa�da, assim fica mais organizado a linha
    for(i = 0; i<20; i++){
        arrayC[i] = arrayA[i] - arrayB[i];
        printf("\nA subreta��o do elemento %.1f pelo %.1f correspondentes, respectivamente, pelas matrizes A e B na matriz C � %.1f.", arrayA[i], arrayB[i], arrayC[i]);
    }

    printf("\n\n");
    system("\npause");
    return 0;
}
