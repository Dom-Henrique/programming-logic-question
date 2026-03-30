/*Escreva um programa que leia o valor de uma distância em metros e calcule o seu
valor correspondente em quilômetros, hectômetros, decâmetros, centímetros,
decímetros e milímetros.*/
#include <stdio.h>
const KM = 1000;
const HM = 100;
const CM = 100;
const DM = 10;
void main()
{
    float distance;
    printf("Distance (m): ");
    scanf("%f", &distance);
    printf("KM: %.2f\nHM: %.2f\nDM: %.2f\nCM: %.2f\n", distance / KM, distance / HM, distance / DM, distance * 100);
}