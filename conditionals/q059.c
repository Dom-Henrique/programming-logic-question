/*Escreva um programa que leia dois números e determine se o segundo número é
menor, igual ou maior que o primeiro.*/
#include <stdio.h>

void main()
{
    int number1, number2;
    printf("First and second numbers: ");
    scanf("%d%d", &number1, &number2);
    if (number1 > number2)
    {
        printf("Number1 greater than number2\n");
    }
    else if (number1 < number2)
    {
        printf("Number1 less than number2\n");
    }
    else{
        printf("Numbers equals\n");
    }
}