/* exercício com ponteiros e com funções */

#include <stdio.h>

/*Protótipo da função*/
void soma (int, int, int*);

int main()
{
    int a = 2, b = 3, c = 4;

    soma(a,b,&c);
    printf("soma de %d e %d: %d\n", a, b , c);
    
}

void soma (int p1, int p2, int *s)
{
    *s = p1 + p2;
    printf("em soma: %d\n", *s);
    return;

}
