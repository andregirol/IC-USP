/* apontador para vetores */

#include <stdio.h>

int main()
{
    int vet[10] , i;
    int *p;

    for (i=0; i<10; i++)
    {
        vet[i] = i + 1;
        printf("[%d]" , vet[i]);
    }

    printf("\n");

    p = &vet[0];

/* Utilizando ponteiros*/
    for (i=0; i<10; i++, p++)
        printf("[%d]" ,*p );
    printf("\n");
    
    p = vet;
/* testar outras combinações! */
    for (i=0; i<10; i++, p++)
        printf("[%d]" ,*p );
    printf("\n");

}


