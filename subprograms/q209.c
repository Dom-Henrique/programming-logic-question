#include <stdio.h>
float arithmeticMean(int n1, int n2, int n3){
    return (n1+n2+n3)/3;
}
void main(){
    int n1, n2, n3;
    printf("Notas 1, 2 e 3: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    float mean = arithmeticMean(n1,n2,n3);
    printf("Arithmetic Mean: %.2f\n", mean);
}