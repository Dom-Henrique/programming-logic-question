/*Escreva um programa que leia o mês e o ano em que um preso começará a cumprir a
sua pena e o tamanho da pena (em número de anos e número de meses, por exemplo,
18 anos e 5 meses)  e determine o mês e o ano em que ele terminará de cumprir a sua
pena.  Para  resolver  esta  questão,  considere  que  o  ano  será  sempre  maior  ou  igual  a
2000.*/
#include <stdio.h>

void main()
{
    int month, year, punishmentMonth, punishmentYear, freeMonth, freeYear;
    printf("Year and month to jail: ");
    scanf("%d%d", &year, &month);
    // considering that each year have 12 months, we need to convert this.
    printf("Time of punishment: ");
    scanf("%d%d", &punishmentYear, &punishmentMonth);
    freeMonth = month + punishmentMonth;
    freeYear = year + punishmentYear + freeMonth % 12;
    freeMonth /= 12;
    printf("%d, %d months\n", freeYear, freeMonth);
}