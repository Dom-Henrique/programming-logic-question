/*Escreva um programa que leia  o número de pessoas que vão participar  de um
churrasco e calcule quantos quilos de carne devem ser comprados. Para isso,
considere que cada pessoa consome 250 g de carne. A resposta do programa deve ser
um número inteiro.*/
#include <stdio.h>

void main()
{
    int peoplesParty;
    float Kg;
    const float KgByPeople = 250;
    printf("Peoples to party: ");
    scanf("%d", &peoplesParty);
    Kg = peoplesParty * KgByPeople;
    printf("Kg of meat: %.2f", Kg);
}