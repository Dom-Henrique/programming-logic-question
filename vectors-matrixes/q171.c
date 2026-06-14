#include <stdio.h>
int const QTD = 5;

void main()
{
    int A[QTD], B[QTD], C[QTD];
    C[0] = 0;
    int k=0;
    for (int i=0;i<QTD;i++){
        printf("%d elementos de A e B: ", i+1);
        scanf("%d%d", &A[i], &B[i]);  
    }
    for (int i = 0; i < QTD; i++)
    {
        for (int j = 0; j < QTD; j++)
        {
            if (A[i]!=B[j]) C[k++] = A[i];
        }
    }
    printf("Elementos: ");
    for (int i=0;i<QTD;i++){
        printf("%d ", C[i]);   
    }
}