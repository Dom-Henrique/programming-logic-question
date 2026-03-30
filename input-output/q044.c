/*Escreva um programa que leia individualmente os valores dos quatro dígitos de um
valor em binário e calcule o seu valor correspondente em decimal.*/

#include <stdio.h>
#include <math.h>

void main()
{
    int d1, d2, d3, d4, decimal;
    printf("Digite o valor em binário de 4 dígitos: ");
    scanf("%d%d%d%d", &d1, &d2, &d3, &d4);
    // fazer aquela mesma regrinha
    decimal = pow(2,0)*d1 + pow(2,1)*d2 + pow(2,2)*d3 + pow(2,3)*d4;
    printf("Decimal: %d\n", decimal);
}