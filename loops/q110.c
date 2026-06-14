/*Escreva um programa que leia um número natural N e calcule o seu fatorial. */
#include <stdio.h>

void main(){
    int N, fatorial=1;
    printf("N: ");
    scanf("%d", &N);
    for (int i=1; i<=N;i++){
        fatorial*=i;
    }
    printf("Fatorial: %d\n", fatorial);
}