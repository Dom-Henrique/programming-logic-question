/*Escreva um programa que leia o número de pessoas que vão participar de um
churrasco e calcule quantos quilos de carne devem ser comprados. Para isso,
considere que cada pessoa consome 250 g de carne.*/
#include <stdio.h>
const int KG = 250;

void main()
{
    int peoplesChurras, meatKg;
    printf("Peoples in churras: ");
    scanf("%d", &peoplesChurras);
    if (peoplesChurras == 0)
    {
        printf("Nothing.");
    }
    else
    {
        meatKg = peoplesChurras * KG;
        printf("%dKG", meatKg);
    }
}