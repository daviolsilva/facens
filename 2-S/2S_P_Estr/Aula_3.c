#include <stdio.h>
void recebe(int *p);
void mostra(int *p);
int main()
{
    int vetor[5];
    recebe(vetor);
    mostra(vetor);
    return 0;
}


void recebe(int *p) {
    int i,j;
    for(i=0, j=0;i<5;i++,p++) //é possível adicionar mais de uma variável em cada passo do for
    {
        printf("End %i - Valor[%i]= ",p,i);
        scanf("%i", p);
    }
}

void mostra(int *p) {
    int i;
    for(i=0;i<5;i++,p++) 
    {
        printf("\nEnd %i - Valor[%i]= %i",p,i,*p);
    }
}