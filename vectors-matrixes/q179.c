#include <stdio.h>
#include <math.h>
int const LNG = 10;

int main(){
    float V[LNG], soma=0;
    int i;
    for (i=0;i<LNG;i++){
        printf("%i elemento: ", i+1);
        scanf("%f", &V[i]);
    }
    for (i=0;i<LNG;i++){
        soma+=pow(V[i],2);
    }
    float u = sqrt(soma);
    printf("Modulo de u eh %.2f\n", u);
}