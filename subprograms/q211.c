/*Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. Cada uma das informações
solicitadas deve ser calculada através de um subprograma.*/
#include <stdio.h>
#include <math.h>

int dobro(int n){
    return 2*n;
}
int triplo(int n){
    return 3*n;
}
int quadrado(int n){
    return n*n;
}
int cubo(int n){
    return n*n*n;
}
int raiz(int n){
    return sqrt(n);
}
int main(){
    int d,t,q,c,r;
    d=dobro(2);
    t=triplo(2);
    q=quadrado(2);
    c=cubo(2);
    r=raiz(2);
    printf("Dobro: %d\nTriplo: %d\nQuadrado: %d\nCubo: %d\nRaiz: %d\n", d,t,q,c,r);
}