/*Escreva um subprograma recursivo que receba como entrada um valor em decimal e 
imprima o seu valor correspondente em hexadecimal.*/
#include <stdio.h>
int toBinary(int n){
    if (n==1) return n;
    return toBinary(n/2);
}