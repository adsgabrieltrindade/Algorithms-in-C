#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float altura, raio, volume, area;

    altura = raio = volume = area = 0;
    const float pi = 3.14159;
    printf("\nDigite o raio da base em cm: \n>>> ");
    scanf("%f", &raio);
        area = (( pow(raio, 2))*pi);
    printf("A �rea da base � de %1.f cent�metros quadrados.\n", area);
    printf("\nDigite a altura da do cilindro: \n>>> ");
    scanf("%f", &altura);
        volume = (altura*area);

    printf("\nO volume do cilindro � de aproximadamente %1.f cent�metros c�bicos.\n\n", volume);
return 0;

}
