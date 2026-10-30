/*Escreva um programa que leia o valor de cinco temperaturas em Celsius e, para cada
valor lido, calcule o seu valor correspondente em Fahrenheit e em Kelvin. Os cálculos
das conversões devem ser realizados através de subprogramas.*/
#include <stdio.h>
float celsiuFah(float temp){
    return ((temp*9)/5)+32;
}
float celsiuKelvin(float temp){
    return temp+273;
}
int main(){
    int cF = celsiuFah(30);
    int cK = celsiuKelvin(30);
    printf("Fahrenheit: %d\nKelvin: %d\n", cF,cK);
}