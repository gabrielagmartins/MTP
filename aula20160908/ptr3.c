#include <stdio.h>
#include <stdlib.h>
int main () {
    double n, n1, soma;
    printf("digite dois numeros reais:");
    scanf("%lf", &n);
    scanf("%lf", &n1);
    printf("%p : %u\n %p : %lf\n", &n, n, &n1, n1);
    soma = n + n1;
    printf("A soma eh: %p : %lf", &soma, soma);
return 0;
}
