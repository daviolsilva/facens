#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void imprime (int *p, int tam);
void aloca (int **p, int tam);
void imprime_inverso(int *p, int tam);
int main() {
    int *ptr = NULL;
    int tamanho = 0;
    char resposta;
 
    printf("\n----Inicio da Codificacao----\n");
        
    do{
        tamanho++;
        aloca(&ptr, tamanho);
        printf("Valor de No %i: ",tamanho-1);
        scanf("%f", &ptr[tamanho-1]);
        printf("Deseja adicionar mais? S/N: ");
        scanf("%c", &resposta);
        resposta= toupper(resposta);
    }
    while (tamanho<32 && resposta=='S');
    {
        imprime(ptr, tamanho);
        imprime_inverso(ptr, tamanho);
    }
    
    free(ptr);
    return 0;
}
void aloca (int **p, int tam) {
    *p = (int *) realloc(p, tam * sizeof(int));
    if(p==NULL) {
        printf("Faltou armazenamento pae!");
        exit(1);
    }
}
void imprime (int *p, int tam){
    int i;
    for (i = 0 ; i<=tam ; i++)
    {
        printf("Valor %i - End %i = %i", i, p, *(p+i));
    }
}
void imprime_inverso(int *p, int tam) {
    int i;
    for (i = tam; i >= 0; i--)
    {
        printf("Valor %i - End %i = %i", i, p, p[i]);
    }
    
}
