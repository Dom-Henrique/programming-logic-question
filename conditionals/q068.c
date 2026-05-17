/*Escreva  um  programa  que  leia  o  valor  do  salário  bruto  de  um  empregado  e  calcule o
seu  salário  líquido.  Para  calcular  o  valor  do  salário  líquido,  deve-se  primeiramente
descontar  uma  taxa  de  11%,  correspondente  ao  valor  da  contribuição  previdenciária.
Depois, do valor restante, deve-se descontar o valor do imposto de renda, que varia de
acordo com o valor do salário. O percentual que deve ser descontado para o imposto
de renda varia de acordo com a tabela abaixo.*/
#include <stdio.h>
float const TAXA = 0.89;

void main()
{
    float salarioBruto, restante, salarioLiquido;
    printf("Salario bruto: ");
    scanf("%f", &salarioBruto);
    restante = salarioBruto * TAXA;
    if (restante < 1903.98)
        salarioLiquido = restante;
    else if (restante >= 1903.98 && restante < 2826.65)
        salarioLiquido = restante * 0.915;
    else if (restante >= 2826.65 && restante < 3751.05)
        salarioLiquido = restante * 0.85;
    else if (restante >= 3751.05 && restante < 4664.68)
        salarioLiquido = restante * 0.775;
    else if (restante >= 4664.68)
        salarioLiquido = restante * 0.725;
    printf("Salario Liquido: %.2f\n", salarioLiquido);
}