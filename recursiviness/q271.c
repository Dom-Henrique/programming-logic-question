/*Escreva  um  subprograma  recursivo  que  receba  como  entrada  um  número  inteiro  e 
calcule a soma de todos os seus algarismos.*/
#include <stdio.h>
int sumAlg(int n){
    if (n<10 && n>0) return n;
    return n+sumAlg(n/10);
}
int main(){
    int n;
    scanf("%d", &n);
    int sla = sumAlg(n);
    printf("%d\n", sla);
}