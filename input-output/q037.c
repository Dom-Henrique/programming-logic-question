/*Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da
unidade de milhar, da centena, da dezena e da unidade.*/
#include <stdio.h>

void main()
{
    // fazer as divisoes
    int number, thousand, hundred, ten, unit;
    printf("Number (1-9999): ");
    scanf("%d", &number);
    thousand = number / 1000;
    hundred = (number - (thousand * 1000)) / 100;
    ten = (number - (thousand * 1000) - (hundred * 100)) / 10;
    unit = number - (thousand * 1000) - (hundred * 100) - (ten * 10);
    printf("%d\n%d\n%d\n%d\n%d\n", number, thousand, hundred, ten, unit);
}