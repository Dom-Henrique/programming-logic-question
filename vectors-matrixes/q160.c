#include <stdio.h>
int const QTD = 10;

void main(){
    int n, vector[QTD];
    for (int i=0;i<QTD;i++){
        printf("Number %d: ", i+1);
        scanf("%d", &vector[i]);
    }
    printf("N: ");
    scanf("%d", &n);
    if (n>0 && n<QTD) printf("%d", vector[n]);
    else printf("O numero nao esta no intervalo.");
}