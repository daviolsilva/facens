#include <stdio.h>

float dS, dT, Vm;

int main() {
    printf("Quantos km voce andou e quantas horas levaram:");
    scanf("%f %f",&dS,&dT);
    Vm = dS/dT;
    printf("Sua velocidade media e igual a %.2f km/h", Vm);
}