/*Escreva um programa que leia o valor de uma distância percorrida em km e o tempo
gasto em horas e calcule a velocidade média em m/s. A conversão deve ser realizada
através de um subprograma.*/
#include <stdio.h>
float velocidadeMedia(float distancia, float tempo){
    if (tempo==0) return 0;
    return (distancia/tempo)/3.6;
}
int main(){
    float v= velocidadeMedia(100,36);
    printf("Velocidade: %f\n", v);
}