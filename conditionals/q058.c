/*Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar.*/
#include <stdio.h>

void main()
{
    int number;
    printf("Number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
}