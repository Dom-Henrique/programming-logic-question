/*Escreva um programa que leia um valor em polegadas e o converta para centímetros,
considerando que uma polegada equivale a 2.54 cm. A conversão deve ser realizada
através de um subprograma.*/
#include <stdio.h>
const float POLEGADA = 2.54;
float polegadaCm(float tamanho){
    return tamanho*POLEGADA;
}
int main(){
    float p = polegadaCm(2.5);
    printf("Tamanho: %.2f", p);
}