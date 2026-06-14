#include <stdio.h>
int const QTD = 10;

void main(){
    int vector[QTD], n;
    for (int i=0;i<QTD;i++){
        printf("Number %d: ", i+1);
        scanf("%d", &vector[i]);
    }
    printf("N: ");
    scanf("%d", &n);
    printf("Todas as posicoes que %d aparece no vetor: ", n);
    for (int i=0;i<QTD;i++){
        if (vector[i]==n) printf("%d ", i);
    }
}