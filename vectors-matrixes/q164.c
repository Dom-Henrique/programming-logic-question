#include <stdio.h>
int const QTD = 10;

void main()
{
    int vector[QTD], m, n;
    for (int i = 0; i < QTD; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
    do
    {
        printf("M e N: ");
        scanf("%d%d", &m, &n);
    } while(m>10 && m<0 || n<0 && n>10);
    printf("Antes: ");
    for (int i = 0; i < QTD; i++)
    {
        printf("%d ", vector[i]);
    }
    int reserva = vector[m];
    vector[m] = vector[n];
    vector[n] = reserva;
    printf("\nDepois: ");
    for (int i = 0; i < QTD; i++)
    {
        printf("%d ", vector[i]);
    }
}