/*Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a
sua área, que deve ser calculada através de um subprograma.*/
#include <stdio.h>
int areaTriangulo(int base, int altura){
    return (base*altura)/2;
}
int main(){
    int area = areaTriangulo(4,6);
    printf("Area: %d\n", area);
}