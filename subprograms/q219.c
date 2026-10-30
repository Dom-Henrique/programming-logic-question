/*Escreva um programa que leia os valores de dois ângulos internos de um triângulo e
calcule o valor do terceiro ângulo. O cálculo deve ser realizado através de um
subprograma.*/
#include <stdio.h>
float thirdAngle(float a1, float a2){
    if (a1+a2>180) return 0;
    return 180-(a1+a2);
}
int main(){
    float a3 = thirdAngle(30, 30);
    printf("Terceiro angulo: %.2f", a3);
}