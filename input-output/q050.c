/*Ana chegou a um consultório médico para uma consulta de rotina. Neste consultório,
o  médico  atende  os  seus  pacientes  de  acordo  com  a  ordem  em  que  eles  chegaram
(cada  paciente  recebe  uma  senha  com  o  número  da  sua  ordem  de  chegada)  e  cada
consulta  demora  exatamente  25  minutos.  Com  base  nestas  informações,  escreva  um
programa que leia um número inteiro correspondendo à hora e outro correspondendo
aos minutos em que Ana chegou ao consultório e o número da senha que ela recebeu
e  determine  a hora em que  ela será atendida. Para isso, considere  que ela chegou ao
consultório no exato momento em que o médico ia atender o paciente que recebeu a
senha 1. */
#include <stdio.h>

void main(){
    int hour, minute, ticket;
    printf("Hour and minute: ");
    scanf("%d%d", &hour, &minute);
    // when she come to place, the doctor be attending the first pacient
    printf("Ticket (the doctor be attending the first pacient): ");
    scanf("%d", &ticket);
    minute += ticket * 25;
    int restHours = minute % 60;
    minute = minute / 60;
    hour += restHours;
    printf("Consultation time: %d:%d\n", hour, minute);
}