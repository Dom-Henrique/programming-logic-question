/*Escreva  um  programa  que  leia  um  texto  e,  em  seguida,  leia  dois  caracteres  x  e  y  e 
substitua,  no  texto  informado,  todas  as  ocorrências  do  caractere  x  pelo  caractere  y. 
Por exemplo, se o texto informado foi “banana”, o caractere x for “a” e o caractere y 
for “e”, o texto deve ser alterado para “benene”.*/

#include <stdio.h>
#include <string.h>
int const LENGTH = 50;

void main(){
    char text[LENGTH];
    char X, Y;
    printf("Texto: ");
    fgets(text, LENGTH, stdin);
    printf("Caractere que procura: ");
    scanf(" %c", &X);
    printf("Caractere que vai substituir: ");
    scanf(" %c", &Y);
    for (int i=0;i<LENGTH;i++){
        if (text[i]==X) text[i] = Y;
    }
    for (int i=0;i<LENGTH;i++){
        printf("%c", text[i]);
    }
}