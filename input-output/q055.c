/*Lázaro está muito feliz por ter enfim conseguido construir a sua casa própria. Sabendo-
se  que  a  construção  durou  180  dias  de  trabalho,  escreva  um  programa  que  leia  o
número  de  pedreiros  que  trabalhavam  na  obra,  o  número  de  ajudantes  e  o  valor  da
diária do pedreiro e calcule quanto Lázaro gastou com mão de obra. Para resolver este
programa, considere que todos os pedreiros e ajudantes trabalharam todos os dias da
obra e que o valor da diária de cada ajudante corresponde à metade do valor da diária
do pedreiro.*/
#include <stdio.h>

void main()
{
    const int workDays = 180;
    int masons, helpers;
    float diaryValue, total;
    printf("Quantity of masons and helpers: ");
    scanf("%d%d", &masons, &helpers);
    printf("Value of diary: ");
    scanf("%f", &diaryValue);
    total = diaryValue * masons + (diaryValue / 2) * helpers;
    printf("Total: $%.2f", total);
}