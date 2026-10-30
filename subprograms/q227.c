/*Escreva  um  programa  que  leia  um  número  positivo entre  1 e  9999 e  calcule  o  valor
da  unidade  de  milhar,  da  centena,  da  dezena  e  da  unidade.  O  programa  deve  ter
subprogramas para calcular cada informação solicitada.*/
#include <stdio.h>
int milhar(int number)
{
    return number / 1000;
}
int centena(int number)
{
    return (number - (milhar(number) * 1000)) / 100;
}
int dezena(int number)
{
    return number - (milhar(number) + (centena(number) * 100)) / 10;
}
int unidade(int number)
{
    return number - (milhar(number) * 1000) + (centena(number) * 100) + (dezena(number) * 10);
}