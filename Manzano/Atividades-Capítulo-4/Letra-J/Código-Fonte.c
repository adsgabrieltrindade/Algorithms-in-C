#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\t\tCap�tulo 4 - Letra J\n\n");
int Num, R;
printf("Digite um n�mero: \n>>> ");
scanf("%i", &Num);
R = (Num % 2);
    if (R == 0){
        printf("\nO n�mero � par!\n");
    }else{
        printf("\nO n�mero � �mpar!\n");
    }

    system("\npause\n");
        return 0;

}
