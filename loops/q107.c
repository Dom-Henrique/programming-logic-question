/*Escreva um programa que leia dois números inteiros M e N e calcule a média
aritmética dos números primos do intervalo [M, N].*/

#include <stdio.h>

void main()
{
    int m, n, soma = 0, cont = 0, numerosPrimos = 0;
    printf("M e N: ");
    scanf("%d%d", &m, &n);
    for (m; m <= n; m++)
    {
        for (int i = 1; i <= m; i++)
        {
            if (m % i == 0)
                numerosPrimos++;
        }
        if (numerosPrimos == 2)
        {
            soma++;
            cont++;
        }
        numerosPrimos = 0;
    }
    float media = (float) soma / cont;
    printf("Media: %.2f", media);
}