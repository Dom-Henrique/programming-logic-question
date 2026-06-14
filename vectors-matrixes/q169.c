#include <stdio.h>
int const QTD = 5;

void main()
{
    int A[QTD], B[QTD];
    for (int j = 0; j < QTD; j++)
    {
        printf("%d termos de A e B: ", j + 1);
        scanf("%d%d", &A[j], &B[j]);
    }
    // preciso fazer o tamanho dos vetores. aq ele divide pelos tamanhos em bytes
    int na = sizeof(A) / sizeof(A[0]);
    int nb = sizeof(B) / sizeof(B[0]);
    int C[na+nb];
    for (int i=0;i<na;i++){
        C[i] = A[i];
    }
    for (int i=0;i<nb;i++){
        C[na+i] = B[i];
    }
    printf("O vetor C possui os seguintes elementos dos vetores A e B: ");
    for (int j = 0; j < na+nb; j++)
    {
        printf("%d ", C[j]);
    }
}