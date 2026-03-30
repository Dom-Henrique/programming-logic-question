/*Escreva um programa que leia o dia do mês em que o cliente fez uma compra e o
prazo de entrega dado pelo vendedor e calcule o dia do mês (atual ou dos meses
seguintes) em que o cliente deve receber o produto. Para resolver este programa,
considere que cada mês tem exatamente 30 dias.*/
#include <stdio.h>

void main()
{
    // sempre que o dia passar de 30, precisa voltar ao inicio (posso usar o modulo)
    int day, daysOfReviece, recieveDay;
    printf("Day and quantity of months from purchase: ");
    scanf("%d%d", &day, &daysOfReviece);
    recieveDay = (daysOfReviece + day) % 30;
    printf("You'll recieve the product in %d\n", recieveDay);
}