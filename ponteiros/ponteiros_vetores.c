/* apontador para vetores */

#include <stdio.h>

int main()
{
    int vet[10] , i;
    int *p;
/* Preenchendo o vetor*/
    for (i=0; i<10; i++)
    {
        vet[i] = i + 1;
        printf("[%d]" , vet[i]);
    }

    printf("\n");
/* deferenciação = Atribuição de endereço da varíavel/vetor ao ponteiro */
    p = &vet[0];

/* Utilizando ponteiros*/
    for (i=0; i<10; i++, p++)
        printf("[%d]" ,*p );
    printf("\n");
/* Sinônimo para deferenciação com & */    
    p = vet;
/* testar outras combinações! */
    for (i=0; i<10; i++, p++)
        printf("[%d]" ,*p );
    printf("\n");

}


