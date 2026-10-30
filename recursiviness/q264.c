/*Escreva um subprograma recursivo que receba como entrada dois números inteiros x 
e y e calcule o valor do produto de x por y.*/
#include <stdio.h>
int product(int x, int y){
    if (y==0||x==0) return 0;
    return x+product(x,y-1);
}
int main(){
    int sla = product(2,2);
    printf("%d\n", sla);
}