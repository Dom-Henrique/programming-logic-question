/* Escreva  um  programa  que  leia  um  número  inteiro  N  e  verifique  se  ele  é  um  número 
perfeito. Um número é  perfeito quando ele é  igual à soma de  todos os seus divisores 
exatos exceto ele mesmo. Por exemplo, o número 6 (1+2+3) é um número perfeito.*/
#include <stdio.h>

void main(){
    int n, soma = 0;
    printf("N: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        if (n%i==0) soma++;
    }
    if (soma==n) printf("Numero perfeito.\n");
    else printf("Numero imperfeito.\n");
}