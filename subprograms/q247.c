/*Escreva um programa que leia os coeficientes a, b e c de uma equação do 2o grau e
calcule todas as suas raízes reais. O programa deve ter um subprograma para calcular
o valor de delta, além de subprogramas para determinar as raízes da equação.*/
#include <stdio.h>
#include <math.h>
int delta(int a, int b, int c)
{
    int delta = (b * b) - 4 * a * c;
    return delta;
}
float Root1(int a, int b, int c)
{
    int d = delta(a, b, c);
    if (d >= 0 && a != 0)
    {
        float x1 = (-b + sqrt(d)) / (2 * a);
        return x1;
    }
    return 0;
}
float Root2(int a, int b, int c)
{
    int d = delta(a, b, c);
    if (d >= 0 && a != 0)
    {
        float x2 = (-b - sqrt(d)) / (2 * a);
        return x2;
    }
    return 0;
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    float x1 = Root1(a, b, c), x2 = Root2(a, b, c);
    printf("X1: %.2f\nX2: %.2f\n", x1, x2);
}