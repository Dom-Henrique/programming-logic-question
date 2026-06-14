#include <stdio.h>
int const QTD = 10;

void main(){
    int vector[QTD];
    for (int i = 0; i < QTD; i++)
    {
        printf("Number %d: ", i+1);
        scanf("%d", &vector[i]);
    }
    printf("Antes: [");
    for (int i = 0; i < QTD; i++)
    {
        printf(" %d ", vector[i]);
    }
    for (int i = 0; i < QTD/2; i++)
    {
        int reserva = vector[i];
        vector[i] = vector[(QTD-1)-i];
        vector[(QTD-1)-i] = reserva;
    }
    printf("]\nDepois: [");
    for (int i = 0; i < QTD; i++)
    {
        printf(" %d ", vector[i]);
    } printf("]\n");
}