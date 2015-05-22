#include <stdio.h>

void cutuca(int *);

int main()
{
    int vet[5] = {1,2,3,4,5};
    
    /*passa o primeiro endereço da memória do vetor*/
    cutuca(vet);

}

void cutuca (int *pv)

{
    int i;

    for (i=0; i<1000000000; i++, pv++)
        printf("[%d]: %p\n",*pv,pv);
    return;
    
}
