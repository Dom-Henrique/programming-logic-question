#include <stdio.h>
#include <math.h>
int const LNG = 3;

int main(){
    float U[LNG], V[LNG];
    float uv=0, u=0, v=0;
    int i;
    for (i=0;i<LNG;i++){
        printf("%d elemento de U e V: ", i+1);
        scanf("%f%f", &U[i], &V[i]);
        uv+= U[i]*V[i];
        u+=pow(U[i],2);
        v+=pow(V[i],2);
    }
    float cosA = uv/(sqrt(u)*sqrt(v));
    printf("Cos de a: %f", cosA);
}