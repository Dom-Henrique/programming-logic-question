/*Escreva  um  programa  que  leia  20  números  entre  10000  e  99999  referentes  aos
números  dos  deputados  estaduais  eleitos  e  identifique  a  quantidade  de  candidatos
que  cada  partido  elegeu.  O  número  do  partido  do  deputado  pode  ser  identificado
pelos dois primeiros algarismos do número do candidato. Por exemplo, um candidato
com número 13457 concorre pelo PT, que é o partido de número 13, enquanto que um
candidato  com  número  45879  concorre  pelo  PSDB,  que  é  o  partido  de  número  45.
Neste  programa,  considere  os  seguintes  números  de  partido:  13  (PT),  14  (PTB),  15
(PMDB), 25 (DEM), 45 (PSDB) e 65( PCdoB)*/

#include <stdio.h>
int const MIN = 1;
int const MAX = 9;

void main()
{
    int n, candidato, PT = 0, PTB = 0, PMDB = 0, DEM = 0, PSDB = 0, PCdoB = 0;
    for (int i = MIN; i < MAX; i++)
    {
        printf("Numero do candidato: ");
        scanf("%d", &n);
        candidato = n / 10000;
        if (candidato == 13)
            PT++;
        else if (candidato == 14)
            PTB++;
        else if (candidato == 15)
            PMDB++;
        else if (candidato == 25)
            DEM++;
        else if (candidato == 45)
            PSDB++;
        else if (candidato == 65)
            PCdoB++;
    }
    printf("PT: %d\nPT: %d\nPTB: %d\nPMDB: %d\nDEM: %d\nPSDB: %d\nPCdoB: %d\n", PT, PTB, PMDB, DEM, PSDB, PCdoB);
}