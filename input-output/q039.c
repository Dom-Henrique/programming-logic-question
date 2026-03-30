/*Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de
transmissão da rede em KB/s e calcule o tempo aproximado necessário para a
transmissão do arquivo. A resposta deve ser dada através de uma mensagem na forma
X horas, Y minutos e Z segundos.*/
#include <stdio.h>

void main()
{
    float fileSize, networkV, time;
    int hour, min, sec;
    printf("File size and network velocity: ");
    scanf("%f%f", &fileSize, &networkV);
    networkV /= 10;
    time = fileSize / networkV;
    hour = time / 3600;
    min = (time - (hour * 3600)) / 60;
    sec = time - (hour * 3600) - (min * 60);
    printf("%d:%d:%d\n", hour, min, sec);
}