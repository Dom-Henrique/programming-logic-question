/*Escreva  um  programa  que  leia  o valor  de  uma  passagem em  reais e  em milhas e,  em 
seguida, leia o valor da passagem (em reais) que Caio deseja comprar e calcule quantas 
milhas ele precisa juntar para que ele não precise pagar pela passagem. Para resolver 
este programa, considere que a proporção entre o valor da milha e o valor em reais é a 
mesma para todos os vôos da companhia aérea*/
#include <stdio.h>

void main(){
    float BRL, ticket;
    int milesNecessary, miles;
    printf("Fly ticket in BRL and miles: ");
    scanf("%f%d", &BRL, &miles);
    printf("Ticket value: ");
    scanf("%f", &ticket);
    milesNecessary = miles/BRL;
    printf("Miles necessary: %d\n", milesNecessary);
}