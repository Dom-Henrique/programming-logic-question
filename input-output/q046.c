/*Escreva um programa que leia um número inteiro entre 0 e 999 e calcule o seu
reverso. Você deve sempre considerar que o número lido tem três algarismos. Desta
forma, o reverso de 195 deve ser 591, o de 768 deve ser 867, de 3 deve ser 300, o de
40 deve ser 40, o de 500 deve ser 5, e assim sucessivamente. O programa deve
armazenar o valor do reverso em uma variável antes de exibi-lo para o usuário.*/

#include <stdio.h>

// dividir o numero e eh isso ai
void main()
{
    int numero, reversoNumero, centena, dezena, unidade;
    printf("Número: ");
    scanf("%d", &numero);
    centena = numero / 100;
    dezena = (numero - (centena * 100))/10;
    unidade = numero - (centena * 100) - (dezena * 10);
    reversoNumero = (unidade*100) + (dezena*10) + centena;
    printf("Número invertido: %d\n", reversoNumero);
}