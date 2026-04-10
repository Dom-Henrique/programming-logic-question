/*Escreva um programa que leia um número inteiro e determine o seu valor absoluto. O
valor absoluto deve ser calculado sem o uso de qualquer função oferecida pela
linguagem.*/
// calcular o modulo do numero
#include <stdio.h>

void main()
{
    int numInt;
    // calcular a distancia ate o zero
    printf("Numero inteiro: ");
    scanf("%d", &numInt);
    if (numInt >= 0)
    {
        printf("Distancia ate o zero: %d\n", numInt);
    }
    else
    {
        printf("Distancia ate o zero: %d\n", -(numInt)); // pra fazer o modulo precisa inverter o numero usando parenteses
    }
}