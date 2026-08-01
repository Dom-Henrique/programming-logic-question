#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int const LN = 10;
int const CL = 10;

void main()
{
    int mat[LN][CL], i, j;
    for (i = 0; i < LN; i++)
    {
        for (j = 0; j < CL; j++)
        {
            mat[i][j] = 0;
        }
    }
    // uso da funcao rand() pra inserir os valores em posicoes aleatorias
    for (j = 0; j < 20; j++)
    {
        int aleatorio = rand() % (20 + 1);
        mat[aleatorio][aleatorio] = aleatorio;
    }
    for (i = 0; i < LN; i++)
    {
        for (j = 0; j < CL; j++)
        {
            printf("%d");
        }
    }
}