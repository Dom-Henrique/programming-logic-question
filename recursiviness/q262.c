/*Escreva  um  subprograma  recursivo  que  receba  como  parâmetros  de  entrada  dois
números inteiros M e N e calcule a soma de todos os números do intervalo [M, N].*/
#include <stdio.h>
int sumRange(int m, int n)
{
    if (m == n)
        return m;
    return m + sumRange(m + 1, n);
}
void main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int naosei = sumRange(m, n);
    printf("%d", naosei);
}