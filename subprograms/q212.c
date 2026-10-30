/*Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua
área e o seu comprimento. O programa deve fornecer um subprograma para calcular
a área e outro para calcular o comprimento.*/
#include <stdio.h>
int areaCirculo(int raio){
    return 3.14*raio*raio;
}
int comprimento(int raio){
    return 2*3.14*raio;
}
int main(){
    int area = areaCirculo(4);
    int com = comprimento(4);
    printf("Area: %d\nComprimento: %d\n", area, com);
}