#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\t\tCap�tulo 4 - Letra F\n\n");
int A, B, C;

printf("Digite um n�mero: \n>>> ");
scanf("%i",&A);
printf("\nDigite outro n�mero: \n>>> ");
scanf("%i",&B);
printf("\nDigite mais um n�mero: \n>>> ");
scanf("%i",&C);
    if(A>B && A>C && B>C){
        printf("\nA sequ�cia na ordem crescente �: \n %i,%i e %i.\n\n", A, B, C);
    }else{
        if (A>B && A>C && C>B){
            printf("\nA sequ�cia na ordem crescente �: \n %i,%i e %i.\nn", A, C, B);
        }else{
            if(B>A && B>C && A>C){
                printf("\nA sequ�cia na ordem crescente �: \n %i,%i e %i.\n\n", B, A, C);
            }else{
                if(B>A && B>C && C>A){
                    printf("\nA sequ�cia na ordem crescente �: \n %i,%i e %i.\\n\n", B, C, A);
                }else{
                    if(C>A && C>B && A>B){
                        printf("\nA sequ�cia na ordem crescente �: \n %i,%i e %i.\n\n", C, A, B);
                    }else{
                        if(C>A && C>B && B>A){
                             printf("\nA sequ�cia na ordem crescente �: \n %i,%i e %i.\n\n", C, B, A);
                        }else{
                            if(A == B && B == C){
                                printf("\nOs n�meros s�o iguais!\n\n");
                            }
                        }
                    }
                }
            }
        }
    }







   /* ACREDITO QUE POSSO UTILIZAR ESSA FUN��O PARA SOLUCIONAR AS OP��ES, POR�M N�O ESTOU
      CONSEGUINDO. FAZER AN�LISE!!

   switch (A, B, C){
    case (A>B && A>C && B>C):
        printf("\nA sequ�cia na ordem crescente �: \n%i,%i e %i.", A, B, C);
        break;
    case (A>B && A>C && C>B):
        printf("\nA sequ�cia na ordem crescente �: \n%i,%i e %i.", A, C, B);
        break;
    case (B>A && B>C && A>C):
        printf("\nA sequ�cia na ordem crescente �: \n%i,%i e %i.", B, A, C);
        break;
    case (B>A && B>C && C>A):
        printf("\nA sequ�cia na ordem crescente �: \n%i,%i e %i.", B, C, A);
        break;
    case (C>A && C>B && A>B):
        printf("\nA sequ�cia na ordem crescente �: \n%i,%i e %i.", C, A, B);
        break;
    case (C>A && C>B && B>A):
        printf("\nA sequ�cia na ordem crescente �: \n%i,%i e %i.", C, B, A);
        break;
    default:
        printf("\nOs n�meros s�o iguais!\n");

    }*/

        system("\npause\n");
        return 0;

}
