#include <stdio.h>
int const QTD = 5;

void main()
{
    int A[QTD], B[QTD];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < QTD; j++)
        {
            printf("%d termos de A e B: ", j+1);
            scanf("%d%d", &A[j], &B[j]);
        }
    }
    int C[QTD];
}