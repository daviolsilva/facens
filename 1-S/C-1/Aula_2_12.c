#include <stdio.h>

float norm, ex, sal;

int main() {
    printf("Digite aqui quantas horas voce trabalha regularmente (sem horas extras): ");
    scanf("%f", &norm);
    printf("\nQuantas horas extras foram trabalhadas: ");
    scanf("%f", &ex);
    sal= (10*norm) + (15 * ex);
    printf("Seu salario considerando %.2fh extras e %.2fh normais sera de R$ %.2f", ex, norm, sal);
}