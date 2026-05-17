/*Escreva  um  programa  que  leia  um  número  inteiro  positivo  N  e  imprima  os  N
primeiros números ímpares positivos.*/
#include <stdio.h>

void main()
{
    int n;
    printf("N: ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
                printf("%d\n", i);
        }
    }
    else printf("Nao pode ser negativo ou zero.\n");
}