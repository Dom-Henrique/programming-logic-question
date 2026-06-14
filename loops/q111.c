/*Escreva  um  programa  que  leia  o  termo  inicial  e  a  razão  de  uma  PA  e  um  número 
inteiro positivo N e imprima os N primeiros termos da progressão. */

#include <stdio.h>

void main(){
    int termoInicial, termoGeral, razao, N;
    printf("Termo inicial, termo geral & razao: ");
    scanf("%d%d%d", &termoInicial, &termoGeral, &razao);
    do{ 
        printf("N: ");
        scanf("%d", &N);
    } while (N<=0);
    
}