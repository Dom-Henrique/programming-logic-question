/*Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e
o seu perímetro. O programa deve ter um subprograma para calcular a área e outro
para calcular o perímetro.*/
#include <stdio.h>
int area(int l){
    return l*l;
}
int perimetroQuadrado(int l){
    return 4*l;
}
int main(){
    int a = area(4);
    int p = perimetroQuadrado(4);
    printf("Area: %d\nPerimetro: %d\n", a, p);
}