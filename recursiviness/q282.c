/*Escreva um subprograma recursivo que receba como entrada um número inteiro n e
um  número  inteiro  positivo  k  e  identifique  o  k-ésimo  alagrismo  do  número  n  (da
direita  para  a  esquerda).  Por  exemplo,  se  n  for  1957  e  k  for  igual  a  3,  o  resultado  do
subprograma deve ser o número 9.*/
#include <stdio.h>
int sla(int num, int length)
{
    if (length <= 0)
        return 0;

    return sla(num, length - 1);
}