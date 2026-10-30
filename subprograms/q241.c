/*Escreva um programa que leia três números inteiros distintos e identifique o maior e 
o  menor  número  lido.  O  programa  deve  ter  um  subprograma  para  calcular  o  maior 
número e outro para calcular o menor número.*/
#include <stdio.h>
int greatestNumber(int n1, int n2, int n3){
    if (n1>n2 && n1>n3) return n1;
    else if (n2>n1 && n2>n3) return n2;
    return n3;
}
int smallerNumber(int n1, int n2, int n3){
    if (n1<n2 && n1<n3) return n1;
    else if (n2<n1 && n2<n3) return n2;
    return n3;
}
void main(){
    int n1,n2,n3;
    scanf("%d%d%d", &n1, &n2, &n3);
    int maior = greatestNumber(n1,n2,n3);
    int menor = smallerNumber(n1,n2,n3);
    printf("Maior: %d\nMenor: %d\n", maior, menor);
}