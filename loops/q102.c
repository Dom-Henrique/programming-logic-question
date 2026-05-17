/*Escreva  um  programa  que  leia  um  número  inteiro  N  e  imprima  todos  os  seus 
divisores exatos. */
#include <stdio.h>

void main(){
    int n;
    printf("N: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        if (n%i==0) printf("%d\n", i);
    }
}