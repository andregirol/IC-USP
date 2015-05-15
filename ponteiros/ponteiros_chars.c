/* ponteiros - char */

#include <stdio.h>

int main() {
    char msg[] = "Universidade";
    char *pc;
    int i,j;


    printf("1. %s\n", msg);
    
    /* primeira forma de escrever o código */
    for(i=0; i<13; i++)
        printf("%c" , msg[i]);
    printf("\n");
    
    pc = msg;

    /* imprimeindo a variável usando ponteiros */
    for(i=0; i<=13; i++, pc++)
    /* o * significa: conteúdo do ponteiro */
        printf("%c" , *pc);
    printf("\n");
  
   /* alterando uma letra do vetor */

    msg [2] = 'X';
    printf("2. %s\n" , msg);

    pc = "Nova mensagem";
    printf("%s\n", pc);
      

}
