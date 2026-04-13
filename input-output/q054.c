/*Seu  Joaquim  é  um  motorista  que  viaja  todos  os  dias  de  Cajazeiras  para  João  Pessoa
para  fazer  entregas  para  empresa  na  qual  trabalha.  Durante  o  percurso,  ele  para
realizar entregas em Sousa, Patos, Campina Grande e João Pessoa. Considerando que
seu  Joaquim  gasta  50  minutos  no  percurso  de  Cajazeiras  para  Sousa,  2  horas  no
percurso entre Sousa e Patos, 2 horas e 30 minutos no percurso entre Patos e Campina
Grande  e  2  horas  no  percurso  entre  Campina  Grande  e  João  Pessoa,  e  que  cada
entrega demora exatamente 20 minutos, escreva um programa que leia o horário em
que  seu  Joaquim  saiu  de  Cajazeiras  (horas  e  minutos)  e  calcule  o  horário  em  que  ele
chegará em cada cidade do itinerário.*/
#include <stdio.h>

void main()
{
    // convert all to minutes
    const int Cajazeiras = 50;
    const int Sousa = 120;
    const int Patos = 150;
    const int CampinaGrande = 120;
    const int delivery = 20;
    int hour, minute, newHour, newMinute;
    printf("Time to leave to destiny: ");
    scanf("%d%d", &hour, &minute);
    newMinute = Cajazeiras + Sousa + Patos + CampinaGrande + minute + (delivery * 4);
    newHour = newMinute % 60 + hour;
    newMinute = newMinute / 60;
    printf("Time to destiny: %d:%d", newHour, newMinute);
}