/*Escreva  um  subprograma  recursivo  que  receba  como  entrada  uma  matriz  quadrada
de  ordem  5  de  números  reais  e  um  número  inteiro  N  (entre  1  e  5)  e  imprima  os  N
primeiros números da diagonal principal.*/
#include <stdio.h>
int const L = 5;
void naoSei(int matrix[L][L], int N)
{
    if (!(N < L) || !(N > L))
    {
        printf("%d", matrix[N][N]);
        naoSei(matrix[L][L], N + 1);
    }
}
void main()
{
    int n;
    scanf("%d", &n);
    int matrix[][L] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    naoSei(*matrix, n);
}