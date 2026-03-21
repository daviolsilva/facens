#include <stdio.h>
#include <math.h>

float num, sqr, power;

int main() {
    printf("Me fala um n\xa0mero rapaiz: ");
    scanf("%f",&num);
    sqr= sqrt(num);
    power= pow(num,8);
    printf("\nA raiz de 2 do seu n\xa0mero %.2f e igual a %.2f", num, sqr);
    printf("\nA potencia de 8 aplicada ao seu numero %.2f e igual a %.2f", num, power);
}