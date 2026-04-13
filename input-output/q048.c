/*Uma  financeira  está  oferecendo  uma  nova  modalidade  de  empréstimo  para  os  seus 
clientes.  Nesta  modalidade,  o  cliente  pode  pagar  o  valor  financiado  em  até  120 
parcelas,  todas  as  parcelas  com  o mesmo valor.  O  valor  de  cada  parcela  corresponde 
ao valor do empréstimo dividido pelo número de parcelas, mais uma taxa de 4% sobre 
o valor total financiado. Com base nestas informações, escreva um programa que leia 
um  valor  a  ser  financiado  pelo  cliente  e  o  número  de  parcelas  desejadas  e  calcule  o 
valor de cada parcela e o valor total que o cliente pagará pelo empréstimo.*/
#include <stdio.h>

void main(){
    // all installments are equals
    float ioan, installment;
    const float taxe = 1.04;
    printf("Desired ioan ($): ");
    scanf("%f", &ioan);
    installment = (ioan/12)*taxe;
    printf("All 12 installments will be $%.2f\n", installment);
}