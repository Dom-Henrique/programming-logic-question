/*
Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros 
e  um  inteiro  N  e  verifique  em  quantas  linhas  e  colunas  diferentes  o  número  N 
aparece dentro da matriz. 
*/

#include <stdio.h>
int const LN = 5;
int const CL = 5;

void main()
{
    int mat[LN][CL], i, j, somaLN = 0, somaCL = 0;
    for (i = 0; i < LN; i++)
    {
        for (j = 0; j < CL; j++)
        {
            printf("Elemento: ");
            scanf("%d", &mat[i][j]);
        }
    }
    int N;
    printf("N: ");
    scanf("%d", &N);
    for (i = 0; i < LN; i++)
    {
        for (j = 0; j < CL; j++)
        {
            if (mat[i][j] == N)
            {
                somaLN += 1;
            }
        }
    }
    for (i = 0; i < LN; i++)
    {
        for (j = 0; j < CL; j++)
        {
            if (mat[j][i] == N)
            {
                somaCL += 1;
            }
        }
    }
    printf("%d\n%d", somaCL, somaLN);
}