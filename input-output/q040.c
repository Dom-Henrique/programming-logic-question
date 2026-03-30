/*Escreva um programa que leia o valor total que um cliente consumiu em um
restaurante e determine o valor final da sua conta, considerando que o restaurante
cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00.*/

#include <stdio.h>
const float TAXA_SERVICO = 1.10;
const float COUVERT_ARTISTICO = 10.0;

void main()
{
    float totalConsumido;
    printf("Total consumido pelo cliente: ");
    scanf("%f", &totalConsumido);
    float valorConta = (totalConsumido * TAXA_SERVICO) + COUVERT_ARTISTICO;
    printf("Conta a pagar: %f\n", valorConta);
}