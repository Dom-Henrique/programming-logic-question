/*Escreva um programa que leia o valor de um ano e verifique se ele é ou não bissexto. 
Um ano é bissexto se ele for divisível por quatrocentos ou se se ele for divisível por 4 
mas não for divisível por 100.*/
#include <stdio.h>

void main(){
    int year;
    printf("Year: ");
    scanf("%d", &year);
    if (year%400 || (year%4 && !(year%100))) printf("Bissext Year!\n");
    else printf("Not bissext year\n");
}