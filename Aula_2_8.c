#include <stdio.h>

float rai, cir;

int main() {
	printf("Digite o valor do seu raio: ");
	scanf("%f",&rai);
	cir = rai * 2 * 3.14;
	printf("\nO valor da sua circunferencia e: %.3f", cir);
	return 0;
}