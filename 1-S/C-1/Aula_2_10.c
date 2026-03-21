#include <stdio.h>

float consume, dist, med;

int main() {
    printf("Quanto voce andou meu fi em quilometros e quanto voce usou de gasolina em litros: ");
    scanf("%f %f",&dist, &consume);
    med=dist/consume;
    printf("\nSua media de consume de gasolina foi de %.3fL", med);
}