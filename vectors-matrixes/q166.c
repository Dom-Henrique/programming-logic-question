#include <stdio.h>
#include <math.h>
int const QTD=11;

void main(){
    char vector[QTD];
    int cont = 0;
    for (int i = 0; i < QTD; i++)
    {
        printf("Letra %d: ",i+1);
        scanf(" %c", &vector[i]);
    }
    for (int i = 0; i < QTD/2; i++)
    {
        if (vector[i]==vector[(QTD-1)-i]) cont+=1;
    }
    if (cont==QTD/2) printf("Eh palindromo.\n");
    else printf("Nao eh palindromo.\n");
}