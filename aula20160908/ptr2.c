#include <stdio.h>
#include <stdlib.h>
int main () {
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int contagem = 0;
    //int tam = sizeof(vetor) /sizeof(int);
    unsigned char *p = NULL,*q; //inicializar ponteiros;
    p = q = (unsigned char *) vetor;
    for(; p < q + sizeof(vetor) ; p++) {
        if(*p == 0xFF) contagem++;
        printf("%p : %X\n", p, *p);
    }
    printf("Bytea apenas com 1's: %d\n", contagem);
    return 0;
     }
