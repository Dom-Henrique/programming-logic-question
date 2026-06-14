#include <stdio.h>
int const QTD = 10;

void main(){
    int vector[QTD], n, soma=0;
    float media;
    for (int i=0;i<QTD;i++){
        printf("Number %d: ", i+1);
        scanf("%d", &vector[i]);
        soma+=vector[i];
    }
    media = (float) soma/QTD;
    printf("Elementos maiores que a media %.2f: ", media);
    for (int i=0;i<QTD;i++){
        if (vector[i]>media) printf("%d ", vector[i]);
    }
}