/*O carro de João consegue percorrer em média 14 km consumindo 1 litro de
combustível. Escreva um programa que leia o valor da distância que João vai percorrer
durante uma viagem e o preço atual de um litro de combustível e calcule quanto ele
deverá gastar com combustível durante a viagem.*/

#include <stdio.h>

void main(){
    float distance, priceLiter, fuel;
    printf("Distance and price of liter: ");
    scanf("%f%f", &distance, &priceLiter);
    fuel = distance/priceLiter;
    printf("Fuel: %fL", fuel);
}