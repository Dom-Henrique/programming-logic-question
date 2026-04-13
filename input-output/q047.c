/*Um banco está realizando uma grande promoção em seus financiamentos. Ele financia
qualquer valor em 5 prestações. O valor da primeira prestação corresponde à 20% do
valor do empréstimo. Os valores das demais prestações correspondem ao valor da
parcela anterior acrescido de uma taxa de juros de 7%. Com base nestas informações,
escreva um programa que leia o valor a ser financiado por um cliente e calcule: o valor
de cada prestação, o valor total que o cliente vai pagar pelo empréstimo e o total de
juros que o cliente vai pagar pelo empréstimo.*/
#include <stdio.h>

void main()
{
    float amountFinanced, installment1, installment2, installment3, installment4, installment5, total, fees;
    printf("Amount to be financed: ");
    scanf("%f", &amountFinanced);
    // a primeira parcela é 25% acrescido e vai crescendo 7% da anterior
    installment1 = amountFinanced * 1.25;
    installment2 = installment1 * 1.07;
    installment3 = installment2 * 1.07;
    installment4 = installment3 * 1.07;
    installment5 = installment4 * 1.07;
    total = installment1 + installment2 + installment3 + installment4 + installment5;
    printf("Installment 1: %f\nInstallment 2: %f\nInstallment 3: %f\nInstallment 4: %f\nInstallment 5: %f\n", installment1, installment2, installment3, installment4, installment5);
    printf("Total: %f", total);
}