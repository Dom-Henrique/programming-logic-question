#include <stdio.h>

void main(){
    int ordem;
    printf("Ordem: ");
    scanf("%d", &ordem);
    int mat[ordem][ordem];
    int elemento = 1, i, j;
    for (i=0;i<ordem;i++){
        for (j=0;j<ordem;j++){
            mat[i][j] = elemento;
            elemento*=2;
        }
    }
    printf("Jogo: \n");
    for (i=0;i<ordem;i++){
        for (j=0;j<ordem;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}