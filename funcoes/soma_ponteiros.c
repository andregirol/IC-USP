#include <stdio.h>

void somaf(int *, int *);

int main()
{
    int i, soma = 0;
    int vet[5] = {1,2,3,4,5};

    somaf(vet, &soma);
    printf("soma = %d\n",soma);

}

void somaf (int *pv, int *s) 
{
    int i;

    for(i=0; i<5; i++, pv++)
        *s = *s + *pv; 
    return;

}
