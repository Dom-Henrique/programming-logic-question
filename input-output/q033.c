/*Escreva um programa que leia o nome e a quantidade de votos recebidos por cada um
dos três candidatos a prefeito de uma cidade e calcule o percentual de votos recebidos
por cada candidato. Para resolver esse programa, considere que não houve votos
brancos e nem nulos.*/

#include <stdio.h>

void main()
{
    int votes1, votes2, votes3;
    float pcrt1, pcrt2, pcrt3;
    printf("Votes: ");
    scanf("%d%d%d", &votes1, &votes2, &votes3);
    float total = votes1 + votes2 + votes3;
    pcrt1 = (votes1 / total) * 100;
    pcrt2 = (votes2 / total) * 100;
    pcrt3 = (votes3 / total) * 100;
    printf("Candidate 1: %f\nCandidate 2: %f\nCandidate 3: %f\nTotal of votes: %f\n", pcrt1, pcrt2, pcrt3, total);
}