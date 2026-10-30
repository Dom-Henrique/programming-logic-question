/*Escreva um programa que leia dois operandos inteiros e um operador (+, -, *, /) e
aplique o operador lido aos dois operandos, na ordem em que os mesmos foram
digitados. Esta verificação deve ser realizada através de um subprograma.*/
#include <stdio.h>
float operations(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
        // break;
    case '-':
        return a - b;
    case '*':
    case 'x':
        return a * b;
    case '/':
        if (b != 0)
            return a / b;
    }
    return 0;
}
int main(){
    int a,b;
    scanf("%d%d", &a,&b);
    char op;
    scanf(" %c", &op);
    float naosei = operations(a,b,op);
    printf("%.2f", naosei);
}