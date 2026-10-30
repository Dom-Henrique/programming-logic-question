/*Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e
determine a distância entre estes dois pontos. A distância entre dois pontos pode ser
determinada através da distância euclidiana. O cálculo da distância deve ser realizado
através de um subprograma, que deve receber como entrada os valores das
coordenadas x e y dos dois pontos.*/
#include <stdio.h>
#include <math.h>
int coordDistance(int x1, int x2, int y1, int y2)
{
    int x = x1 - x2, y = y1 - y2;
    return sqrt(pow(x, 2) + pow(y, 2));
}