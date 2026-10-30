/*Escreva  um  programa  que  leia  três  números  inteiros  distintos  e  identifique  o  maior 
número lido. Esta verificação deve ser realizada através de um subprograma.*/
#include <stdio.h>
int greatestNumber(int n1, int n2, int n3){
    if (n1>n2 && n1>n3) return n1;
    else if (n2>n1 && n2>n3) return n2;
    return n3;
}