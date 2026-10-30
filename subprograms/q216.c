/*Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e
calcule o valor da hipotenusa. O cálculo deve ser realizado através de um
subprograma.*/
#include <stdio.h>
#include <math.h>
int hipotenusa(int c1, int c2){
    return sqrt((c1*c1) + (c2*c2));
}
int main(){
    int h = hipotenusa(3,4);
    printf("hipotenusa: %d\n", h);
}