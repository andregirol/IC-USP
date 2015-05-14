/*
* Exercicio sobre ponteiros - 14/05/2015
*/
#include <stdio.h>

int main()
{

    int a =10;
    int *pa;

    pa = &a;

    printf ("1. Conteudo de a %d\n", a);
    
    /*conteudo de pa*/
    *pa = 1;
    printf ("2. Conteudo de a %d\n", a);
}
