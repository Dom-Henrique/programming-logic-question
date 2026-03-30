/*Escreva um programa que leia os dois últimos valores da leitura de um medidor de
energia em KWh e calcule o valor da conta de energia, considerando que: o preço de 1
KWh é R$ 0,35, o valor da ICMS corresponde à 17% do valor do consumo e a taxa de
iluminação pública é de R$ 15,00.*/

#include <stdio.h>
const float KWH = 0.35;

void main(){
    float medida1, medida2, contaEnergia;
    printf("Valores das duas últimas medidas: ");
    scanf("%f%f", &medida1, &medida2);
    float contaInicial = (medida1+medida2)*KWH;
    float ICSM = (contaInicial*17)/100;
    contaEnergia = ICSM+15;
    printf("Conta final: %f\n", contaEnergia);
}