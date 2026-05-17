/*Escreva  um  programa  que  leia  um  número  inteiro  N  e  verifique  se  ele  é  um  número 
primo. */
#include <stdio.h>

void main(){
    int n, cont = 0;
    printf("N: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        if (n%i==0) cont++;
    }
    if (cont==2) printf("Primo.\n");
    else if (cont!=2 || n==1 || n==2 || n==0) printf("Nao-primo.\n");
}