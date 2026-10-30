/*Escreva um programa que leia os coeficientes a, b e c de uma equação do 2o grau e
verifique a quantidade de raízes reais da equação. O programa deve ter um
subprograma para calcular o valor de delta e outro para determinar a quantidade de
raízes reais.*/
#include <stdio.h>
#include <math.h>
int delta(int a, int b, int c)
{
    int delta = (b * b) - 4 * a * c;
    return delta;
}
int qtdRoots(int a, int b, int c)
{
    int d = delta(a, b, c);
    if (d >= 0 && a != 0)
    {
        int x1 = (-b + sqrt(d)) / (2 * a);
        int x2 = (-b - sqrt(d)) / (2 * a);
        return 2;
    }
    else return 1;
    return 0;
}