/*Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 50,00.
Escreva um programa que leia o comprimento e a largura de um terreno localizado
nesta cidade e calcule o seu valor de mercado. O cálculo deve ser realizado através
de um subprograma, que deve receber como entrada o comprimento e a largura do
terreno.*/
#include <stdio.h>
const float VALOR_M2 = 50;
float valorMercado(float comprimento, float largura){
    return comprimento*largura*VALOR_M2;
}
int main(){
    float terreno = valorMercado(100, 200);
    printf("Valor: R$%.2f", terreno);
}