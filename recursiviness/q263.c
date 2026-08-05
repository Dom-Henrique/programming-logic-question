/*Escreva  um  subprograma  recursivo  que  receba  como  entrada  um  número  inteiro  N
positivo e provoque um salto de N linhas na tela do usuário.*/
#include <stdio.h>
void brokenLines(int n)
{
    if (n != 0)
    {
        printf("__________\n");
        brokenLines(n - 1);
    }
}
void main()
{
    int n;
    scanf("%d", &n);
    brokenLines(n);
}