#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float altura, raio, volume, area, pi;

    altura = raio = volume = area = 0;
      pi = 3,14159;
    printf("Digite o raio da base em cm: ");
    scanf("%f", &raio);
        area = (pi*( pow(raio, 2)));
    printf("\n A �rea da base � de %1.f cent�metros quadrados.\n", area);
    printf("Digite a altura da do cilindro: ");
    scanf("%f", &altura);
        volume = (area*altura);

    printf("\n O volume do cilindro � de %1.f cent�metros c�bicos.", volume);
return 0;
system("\npause");
}
