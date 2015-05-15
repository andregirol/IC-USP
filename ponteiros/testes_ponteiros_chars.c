#include <stdio.h>

int main() {
    int i;
    char *vixe = "Minha nossa, tem isso também?";
    char eagora[] = "Sou diferente do cara acima!";
    char *p;

    printf("[%s]\n" , vixe);
    printf("[%s]\n" , eagora);

    p=vixe;
    for(i=0; i<10; i++, p++)
        printf("[%c]" , *p);
    printf("\a");
    
}
