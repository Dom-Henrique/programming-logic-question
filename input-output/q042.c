/*Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu
índice de massa corporal.*/
// imc = peso * altura**2

#include <stdio.h>

void main()
{
    float peso, altura, imc;
    printf("Peso e altura: ");
    scanf("%f%f", &peso, &altura);
    imc = peso / (altura * altura);
    printf("IMC: %f\n", imc);
}