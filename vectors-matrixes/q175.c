#include <stdio.h>

int main()
{
    int n;
    // 1 rodada: abriu todas
    // 2 rodada: so com numeros pares
    // 3 rodada: os que eram multiplos de 3
    printf("N: ");
    scanf("%d", &n);
    int abertas;
    for (int i = 1; i <= n; i++)
    {
        abertas = n;
        if (i % 2 == 0)
        {
            abertas /= 2;
            if (i % 3 == 0)
                abertas/=3;
        }
    }
    printf("Numero de portas abertas: %d\n", abertas);
}