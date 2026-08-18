#include <stdio.h>

// Aula 2: 
// recursividade = chamar a função dentro dela mesma

// - substitui o While ou For
// - obrigatoriamente tem uma condição de parada
// - caso base (break) X caso recursivo (motor)


// Caso Recursivo
long int fatorial (long int num);
int main() {

    long int n, fat;
    printf("Digite um numero: ", &n);
    scanf("%i", &n);
    fat = fatorial (n);
    printf("\n Fatorial = %i", fat);

    return 0;
}

long int fatorial (long int num) {

    if(num == 0) { // Caso Base
        return 1;
    }
    else {
        return (num * fatorial(num-1));
    }
};

// -----------------
// Parte 2: Fibonacci
// -----------------

