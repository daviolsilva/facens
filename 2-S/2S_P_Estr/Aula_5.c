#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void aloca (float **p, int tam);
void recebe (float *p, int tam);
void imprime (float *p, int tam);
int main()
{
    float *ptr = NULL;
    aloca (&ptr,10);
    recebe(ptr,10);
    imprime(ptr,10);
    //altera
    imprime(ptr,10);
    return 0;
}

void imprime (float *p, int tam)
{
    int i;
    printf("\nFuncao imrime - Mostra os valores\n");
    for(i=0;i<tam;i++)
    {
        printf("Endereco: %u - Valor %.2f\n",p+i,*(p+i));
        scanf("%f",p+i);
    }
}
void recebe (float *p, int tam){
    int i;
    printf("\nFuncao recebe - Digite os valores\n");
    for (i = 0; i < tam; i++)
    {    
    printf("Endereco: %u - Valor = ",p+i);
    scanf("%f", p+i);
    }
}

void aloca (float **p, int tam)
{
    printf("\nFuncao aloca - End: %u", *p);
    if( (*p=(float *)realloc(*p, tam * sizeof(float))) == NULL)
    {
        printf("Erro na alocacao de memoria!");
        exit(1);
    }
    printf("\nFuncao aloca - End: %u", *p);
}

void imprimeInverso (float *p, int tam) 
{
    int i;
    printf("\nFuncao imprime - Mostra os valores\n");
    for (i = 0; i > tam; i++)
    {
       printf("Funcao deu certo!", p+i);
    }
    
}