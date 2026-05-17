/*Escreva um programa que leia dois números inteiros M e N e calcule a soma de todos 
os números do intervalo [M, N]. */
#include <stdio.h>

void main(){
    int m, n, soma=0;
    printf("M e N: ");
    scanf("%d%d", &m, &n);
    for (m;m<=n;m++){
        soma+=m;
    }
    printf("Soma: %d.\n", soma);
}