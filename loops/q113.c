/*Escreva um programa que leia um texto e verifique a quantidade de letras maiúsculas, 
a  quantidade  de  letras  minúsculas,  a  quantidade  de  numerais  e  a  quantidade  de 
demais caracteres.*/
#include <stdio.h>
int const LENGTH = 30;

void main(){
    int numerais, maiusculas, minusculas, demais;
    char texto[LENGTH];
    printf("Texto: ");
    fgets(texto, LENGTH, stdin);
    // utilizar a tabela ASCII
}