/*Escreva  um  subprograma  recursivo  que  receba  como  entrada  um  número  inteiro  N 
não negativo e imprima a saída mostrada abaixo.*/
#include <stdio.h>
void naoSei(int n){
    if (n!=0) printf("*");
    naoSei(n-1);
    printf("\n");
}
int main(){
    int n;
    scanf("%d", &n);
    naoSei(n);
}