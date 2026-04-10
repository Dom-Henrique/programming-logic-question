/*Escreva um programa que leia dois números inteiros M e N e verifique se N é múltiplo
de M.*/
#include <stdio.h>

void main(){
    int m, n;
    printf("Valores de M e N: ");
    scanf("%d%d", &m, &n);
    if (m%n==0){
        printf("%d eh multiplo de %d\n", m, n);
    } else{
        printf("%d nao eh multiplo de %d\n", m, n);
    }
}