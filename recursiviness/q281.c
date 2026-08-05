/*Escreva  um  subprograma  recursivo  que  receba  como  entrada  um  vetor  de  dez
números inteiros já ordenados, um número inteiro X, e dois índices M e N e verifique
se o número X está presente no vetor entre as posições M e N. Esta verificação deve
ser feita através de uma busca binária.*/
#include <stdio.h>
int const L = 10;
int verifyNaosei(int vet[L], int index, int max, int min)
{
    while (min <= max)
    {
        if (vet[min] < index)
            return verifyNaosei(vet[L], index, max, min + 1);
        else if (vet[max] > index)
            return verifyNaosei(vet[L], index, max + 1, min);
    }
}
void main()
{
    int vet[L] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int m, n, x;
    scanf("%d%d%d", &x, &m, &n);
    // int ns = verifyNaosei(*vet[L], x, n, m);
    // printf("%d\n", ns);
}