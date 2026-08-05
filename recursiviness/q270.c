/*Escreva  um  subprograma  recursivo  que  receba  como  entrada  um  número  inteiro  e 
calcule a sua quantidade de algarismos.*/
#include <stdio.h>
int quantidadeAlg(int n){
    if (n<10 & n>=0) return 1;
    return 1 + quantidadeAlg(n/10);
}
int main(){
    int n;
    scanf("%d", &n);
    int sla = quantidadeAlg(n);
    printf("%d\n", sla);
}