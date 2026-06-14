#include <stdio.h>
int const LNG = 5;

void main()
{
    int A[LNG], B[LNG];
    for (int i = 0; i < LNG; i++)
    {
        printf("%d elementos de A e B: ", i + 1);
        scanf("%d%d", &A[i], &B[i]);
    }
    int na = sizeof(A) / sizeof(A[0]);
    int nb = sizeof(B) / sizeof(B[0]);
    int C[na + nb];
    for (int i = 0; i < na; i++)
    {
        C[i] = A[i];
    }
    for (int i = 0; i < nb + na; i++)
    {
        C[na + i] = B[i];
    }
    for (int i = 0; i < na + nb - 1; i++)
    {
        for (int j = 0; j < na + nb - 1; j++)
        {
            if (C[j] > C[j + 1])
            {
                int reserva = C[j];
                C[j] = C[j + 1];
                C[j + 1] = reserva;
            }
        }
    }
    printf("Vetor: ");
    for (int i = 0; i < na + nb; i++)
    {
        printf("%d ", C[i]);
    }
}