/*Escreva um programa que leia um valor em segundos e converta para a forma X horas
Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos e 10
segundos.*/
#include <stdio.h>

void main()
{
    int time, hour, min, sec;
    printf("Seconds: ");
    scanf("%d", &time);
    hour = time/3600;
    min = (time-(hour*3600))/60;
    sec = time-(hour*3600)-(min*60);
    printf("%d:%d:%d\n", hour, min, sec);
}