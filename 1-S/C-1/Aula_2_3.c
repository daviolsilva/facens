#include <stdio.h>

float c ,m;

int main() {
	printf("Digite o seu numero em metros: ");
	scanf("%f",&m);
	c = m * 100;
	printf("Seu numero em centimetros e: %.2f", c);
	return 0;
}