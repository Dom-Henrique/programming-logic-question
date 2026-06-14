#include <stdio.h>
int const QTD = 5;

void main()
{
    int A[QTD], B[QTD];
    for (int i = 0; i < QTD; i++)
    {
        printf("%d elementos de A e B: ", i + 1);
        scanf("%d%d", &A[i], &B[i]);
    }
    int C[QTD];
    C[0] = 0; 
    // inicializacao para que o vetor nao nos informe endereco de memoria
    int k = 0;
    for (int j = 0; j < QTD; j++)
    {
        for (int i = 0; i < QTD; i++)
        {
            if (B[i] == A[j])
            {
                C[k++] = A[j];
                //break;
            }
        }
    }
    printf("Elementos do vetor C: ");
    for (int i = 0; i < QTD; i++)
    {
        printf("%d ", C[i]);
    }
}