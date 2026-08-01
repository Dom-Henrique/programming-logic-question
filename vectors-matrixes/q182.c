#include <stdio.h>
int const LN = 5;
int const CL = 5;
int main()
{
    float mat[LN][CL];
    int i, j;
    for (i = 0; i < LN; i++)
    {
        for (j = 0; j < CL; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
    for (j = 0; j < CL; j++)
    {
        for (i=0;i<LN;i++){
            printf("%.2f ", mat[j][i]);
        }
        printf("\n");
    }
    for (j = 0; j < CL; j++)
    {
        for (i=0;i<LN;i++){
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }
}