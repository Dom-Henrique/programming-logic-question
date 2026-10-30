/*Escreva um subprograma recursivo que receba como entrada um valor em decimal e
imprima o seu valor correspondente em binário.*/
#include <stdio.h>
void binario(int n)
{
    if (n > 0)
    {
        binario(n / 2);
        printf("%d", n % 2);
    }
}
// funcao que retorna um valor em binario
int converteBin(int n){
    int resultado=0;
    int posicao =1;
    while(n>0){
        resultado += n%2;
        n/=2;
    }
    return resultado;
}
int main()
{
    binario(13);
}