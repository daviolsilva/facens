#include<stdio.h>

int num, mult;

int main() {
	printf("Digite um numero:");
	scanf("%d",&num);
	mult = num * 2;
	printf("\n O dobro do numero digitado e: %d", mult);
	return 0;
}