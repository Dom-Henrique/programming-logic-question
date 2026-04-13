/*Escreva um programa que leia um número inteiro e verifique se ele é positivo,
negativo ou neutro.*/
#include <stdio.h>

void main(){
    int numInt;
    printf("Integer number: ");
    scanf("%d", &numInt);
    if (numInt>0){
        printf("Positive\n");
    } else if (numInt<0){
        printf("Negative\n");
    } else{
        printf("Neutral number\n");
    }
}