#include <stdio.h>

int num;

int main() {
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num % 2 == 0) {
        printf("\nSeu numero %d \x82 par!", num);
    }
    else {
        printf("Seu numero %d \x82 impar!", num);
    }
}