/*Escreva um subprograma recursivo que receba como entrada dois números inteiros x
e  y  e  calcule o  quociente  (a  parte  inteira)  da  divisão de  x  por y.  Para  isso,  não deve
ser usada a função div.*/
#include <stdio.h>
int calculaQuociente(int x, int y)
{
    // para isso eh preciso contar quantas vezes pode ser feito a diferenca
    // if (y != 0)
    if (x < y || y == 0)
    {
        // return 1 + calculaQuociente(x, x - y);
        return 0;
    }
    return 1 + calculaQuociente(x - y, y);
}
void main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int res = calculaQuociente(x, y);
    int naosei = calculaResto(x, y);
    printf("%d\n%d\n", res, naosei);
}