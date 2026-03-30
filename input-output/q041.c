/*Escreva um programa que leia a quantidade de horas trabalhadas por um funcionário
de uma empresa durante um mês e o valor de cada hora trabalhada e determine o seu
pagamento. O programa deve considerar que a carga-horária mensal do funcionário é
de 160 horas e que o valor de cada hora extra corresponde ao valor da hora
trabalhada acrescido de uma taxa de 50%. Para resolver a questão, considere que a
quantidade de horas trabalhadas nunca será inferior a 160.*/
#include <stdio.h>

void main()
{
    int horasTrabalhadas, horaExtra;
    float valorHora; // carga horaria mensal eh de 160
    printf("Horas trabalhadas mensalmente (menor que 160): ");
    scanf("%d", &horasTrabalhadas);
    printf("Valor da hora: ");
    scanf("%f", &valorHora);
    printf("Hora extra: ");
    scanf("%d", &horaExtra);
    float pagamento = (horasTrabalhadas * valorHora) + (horaExtra * valorHora * 1.5);
    printf("Pagamento: %d\n", pagamento);
}