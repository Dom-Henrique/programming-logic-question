/*Escreva um programa que leia o número de gols marcados pelo time da casa e o
número de gols marcado pelo time visitante e verifique se o jogo foi vencido pelo time
da casa, pelo time visitante ou se terminou empatado.*/

#include <stdio.h>

void main(){
    int home, visitors;
    printf("Home X Visitors: ");
    scanf("%d%d", &home, &visitors);
    if (home>visitors){
        printf("Winner: Home\n");
    } else if (home<visitors){
        printf("Winner: Visitors\n");
    } else{
        printf("Tie!\n");
    }
}