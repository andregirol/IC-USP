/*
 Exercicio sobre ponteiros - 14/05/2015
 Evolução do script
*/
#include <stdio.h>

int main()
{

    int a = 1, b=10;
    int *pa;

    pa = &a;

    printf ("Endereço de a %p\n", pa);
    printf ("1. Conteudo de a %d\n", *pa);
    
    /*conteudo de pa recebe*/
    *pa = 9;
    printf ("2. Conteudo de a %d\n", *pa);

    pa = &b;

    printf ("3. Conteudo de a %d\n", *pa);
}
