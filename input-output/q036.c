/*Escreva um programa que leia dois números inteiros e os armazene em duas variáveis
a e b. Após a leitura, o programa deve permutar os valores armazenados nas duas
variáveis. O programa deve imprimir os valores das duas variáveis antes e após a
permutação.*/
#include <stdio.h>

void main(){
    int a, b, c;
    printf("Insert two values: ");
    scanf("%d%d", &a, &b);
    c = b;
    b = a;
    a = c;
    printf("a: %d\nb: %d\n", a, b);
}