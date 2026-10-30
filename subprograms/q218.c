/*Escreva  um  programa  que  leia  o  valor  do  seno  de  um  ângulo  e  calcule  o  valor
absoluto do seu cosseno. O cálculo deve ser realizado através de um subprograma. */
#include <stdio.h>
#include <math.h>
float absoluteCosine(float sine)
{
    return sqrt(1 - pow(sine, 2));
}
int main(){
    float sine = absoluteCosine(0.5);
    printf("Cosseno absoluto: %.2f", sine);
}