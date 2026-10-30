/*Escreva um programa que leia o valor do raio de uma esfera e determine o seu
volume. O cálculo deve ser realizado através de um subprograma*/
#include <stdio.h>
#include <math.h>
float volumeEsfera(float raio){
    return (4*3.14*pow(raio,3))/3;
}
int main(){
    float volume = volumeEsfera(3);
    printf("Volume: %f\n", volume);
}