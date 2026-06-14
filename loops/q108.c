/*Escreva  um  programa  que  leia  20  números  entre  10000  e  99999  referentes  aos
números  dos  deputados  estaduais  eleitos  e  identifique  a  quantidade  de  candidatos
que  cada  partido  elegeu.  O  número  do  partido  do  deputado  pode  ser  identificado
pelos dois primeiros algarismos do número do candidato. Por exemplo, um candidato
com número 13457 concorre pelo PT, que é o partido de número 13, enquanto que um
candidato  com  número  45879  concorre  pelo  PSDB,  que  é  o  partido  de  número  45.
Neste  programa,  considere  os  seguintes  números  de  partido:  13  (PT),  14  (PTB),  15
(PMDB), 25 (DEM), 45 (PSDB) e 65( PCdoB)*/

#include <stdio.h>
#include <math.h>

int const MIN = 1;
int const MAX = 5;

void main()
{
    int n, candidato, PT = 0, PTB = 0, PMDB = 0, DEM = 0, PSDB = 0, PCdoB = 0;
    for (int i = MIN; i <= MAX; i++)
    {
        printf("Numero do candidato: ");
        scanf("%d", &n);
        candidato = floor(n / 1000);
        switch (candidato)
        {
        case 13:
            PT += 1;
            break;
        case 14:
            PTB += 1;
            break;
        case 15:
            PMDB += 1;
            break;
        case 25:
            DEM += 1;
            break;
        case 45:
            PSDB += 1;
            break;
        case 65:
            PCdoB += 1;
            break;
        }
    }
    printf("PT: %d % \nPTB: %d % \nPMDB: %d % \nDEM: %d % \nPSDB: %d % \nPCdoB: %d % \n", (float) PT/(MAX-MIN), (float) PTB/(MAX-MIN), (float) PMDB/(MAX-MIN), (float) DEM/(MAX-MIN), (float) PSDB/(MAX-MIN), (float) PCdoB/(MAX-MIN));
}