/*Escreva  um  subprograma  recursivo  que  receba  como  entrada  o  termo  inicial  e  a
razão  de  uma  progressão  aritmética  e  um  número  inteiro  positivo  N  e  calcule  o
enésimo termo da progressão.*/
#include <stdio.h>
int progressaoAritmetica(int razao, int n)
{
    if (razao <= 0)
        return n;
    return n + progressaoAritmetica(razao, n - 1);
}