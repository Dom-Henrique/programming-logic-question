#include <stdio.h>
int const QTD = 10;

void main(){
    int vector[QTD];
    for (int i=0;i<QTD;i++){
        printf("Number %d: ", i+1);
        scanf("%d", &vector[i]);
    }
    for (int i=QTD-1;i>=0;i--){
        printf("%d ", vector[i]);
    }
}