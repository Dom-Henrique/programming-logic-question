#include <stdio.h>
int const QTD = 10;

void main(){
    int vectors[QTD];
    for (int i=0;i<QTD;i++){
        printf("Number %d: ", i+1);
        scanf("%d", &vectors[i]);
    }
    for (int i=0;i<QTD;i++){
        printf("%d ", vectors[i]);
    }
}