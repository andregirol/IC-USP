#include <stdio.h>

void troca (int *, int *);

int main()
{
    int a = 10;
    int b = 20;

    troca (&a, &b);

    printf("a: %d, b: %d\n", a, b);
}

void troca (int *x, int *y)
{
    int temp;

    temp =*x;
    *x = *y;
    *y = temp;
    return;
}
