#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\tCap�tulo 6 - Letra C\n\n");

    int arrayA[15], arrayB[15], i = 0;
    printf("\nDigite 15 elementos para a matriz A: \n");
    for(i = 0; i<15; i++){
        printf(">>> ");
        scanf("%i", &arrayA[i]);}
    for(int linha = 0; linha<=90; linha++) //Este la�o � para criar uma linha de separa��o entre os comandos de entrada
    printf("-");                        //e sa�da, assim fica mais organizado a linha

    printf("\nSegue os valores da matriz A e o quadrado desse mesmo valor na matriz B:\n\n");
    for(i = 0; i<15 ; i++){
        arrayB[i] = arrayA[i] * arrayA[i];
        printf("Matriz A, valor inserido %i e, na matriz B, o quadrado � %i\n", arrayA[i], arrayB[i]);
    }

    printf("\n\n");
    system("\npause");
    return 0;
}
