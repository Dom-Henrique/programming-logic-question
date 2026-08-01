#include <stdio.h>
int const LNG = 5;

int main(){
    int A[LNG], B[LNG], V[LNG];
    int i, j;
    for (i=0;i<LNG;i++){
        printf("%d elemento: ", i+1);
        scanf("%d%d", &A[i], &B[i]);
        V[i] = A[i]*B[i];
    }
    printf("Produto escalar: ");
    for (j=0;j<LNG;j++){
        printf("%d ", V[j]);
    }
}