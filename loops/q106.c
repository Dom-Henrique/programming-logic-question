/*Escreva um programa que leia dois números inteiros M e N e calcule a média 
aritmética dos números do intervalo [M, N]. */
#include <stdio.h>

void main(){
    int m, n, soma = 0, cont;
    printf("M e N: ");
    scanf("%d%d", &m, &n);
    cont = n-m;
    for (m;m<=n;m++){
        soma+=m;
    }
    float media = (float) soma / cont;
    printf("Media: %.2f", media);
}