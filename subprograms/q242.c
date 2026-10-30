/*Escreva um programa que leia três números distintos e identifique o número que não
é nem o menor e nem o maior número. Esta verificação deve ser realizada através de
um subprograma.*/
#include <stdio.h>
int coffeeMilk(int n1, int n2, int n3)
{
    if ((n2 > n1 && n2 < n3) || (n2<n1 && n2>n3))
        return n2;
    else if ((n1 > n2 && n1 < n3) || (n1<n2 && n1>n3))
        return n1;
    return n3;
}
void main()
{
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);
    int cafeLeite = coffeeMilk(n1, n2, n3);
    printf("Cafeh com leite: %d\n", cafeLeite);
}