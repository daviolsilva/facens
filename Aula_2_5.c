#include <stdio.h>
#include <math.h>

float num1, num2, div, quo;

int main() {
	printf("Digite o seu dividendo: ");
	scanf("%f",&num1);
	printf("\nDigite o seu divisor: ");
	scanf("%f",&num2);
	div = num1 / num2;
	quo = fmod(num1, num2);
	printf("\nSeu resultado e: %.3f", div);
	printf("\nSeu quociente e: %.3f", quo);
	return 0;
}