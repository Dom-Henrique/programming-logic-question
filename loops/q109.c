/* Escreva  um  programa  que  leia  dois  números  inteiros  M  e  N  e  um  número  inteiro  X  e 
imprima todos os divisores exatos de X existentes no intervalo [M, N].*/

#include <stdio.h>

void main(){
    int M, N, X;
    printf("M e N: ");
    scanf("%d%d", &M, &N);
    printf("X: ");
    scanf("%d", &X);
    printf("Os divisores sao: ");
    for (int i=M; i<=N; i++){
        if (X%i==0) printf("%d ", i);
    }
}