#include <stdio.h>

float num1, num2, num3;

int main() {
    printf("Digite o 1\xf8 n\xa3mero: ");
    scanf("%f",&num1);
    printf("\nDigite o 2\xf8 n\xa3mero: ");
    scanf("%f",&num2);
    printf("\nDigite o 3\xf8 n\xa3mero: ");
    scanf("%f",&num3);
    if(num1<=num3 && num2>num3) {
        printf("\nSeu n\xa3mero est\xa0 dentro do intervalo!");
    }
    if(num1>num3) {
        printf("Seu n\xa3mero est\xa0 ABAIXO do intervalo!");
    }
    if (num2<num3) {
        printf("Seu n\xa3mero es\xa0 ACIMA do intervalo!");
    }
}