#include <stdio.h>
int const LN = 4;
int const CL = 4;

int main()
{
    int mat[LN][CL], i, j;
    for (i = 0; i < LN; i++)
    {
        for (j = 0; j < CL; j++)
        {
            printf("Elemento: ");
            scanf("%d", &mat[LN][CL]);
        }
    }
    for (i = 0; i < LN; i++)
    {
        for (j = 0; j < CL; j++)
        {
            printf("%d", mat[i][j]);
        }
    }
}