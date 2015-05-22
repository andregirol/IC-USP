#include <stdio.h>

void cutuca(int *);

int main()
{
    int i;
    int vet[5] = {1,2,3,4,5};

    cutuca(vet);

    for (i=0; i<5; i++)
        printf("[%d]", vet[i]);
    printf("\n");

}

void cutuca (int *pv)
{
    int i;
    int *pguarda;

    pguarda = pv;

    for(i=0; i<5; i++, pv++)
        printf("[%d]: %p \n", *pv, pv );

    pv = pguarda;
    
    for(i=0; i<5; i++, pv++)
        *pv = 0;
    return;

}
