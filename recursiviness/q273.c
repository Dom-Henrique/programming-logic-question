/*Escreva um subprograma recursivo que receba como entrada dois números inteiros x 
e  y  e  calcule  o  resto  da  divisão  de  x  por  y.  Para  isso,  não  deve  ser  usada  a  função 
mod.*/
#include <stdio.h>
int calculaResto(int x, int y)
{
    if (x < y || y == 0)
    {
        // return 0;
        return x;
    }
    return calculaResto(x - y, y);
}
void main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int res = calculaQuociente(x, y);
    int naosei = calculaResto(x, y);
    printf("%d\n%d\n", res, naosei);
}