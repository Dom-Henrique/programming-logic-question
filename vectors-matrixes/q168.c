#include <stdio.h>
#include <string.h>
int const QTD = 10;

void main()
{
    char gabarito[QTD] = {'a', 'b', 'c', 'd', 'e',
                          'a', 'b', 'c', 'd', 'e'};
    char name[100];
    char gabAluno[QTD];
    int score = 0, totalScore = 0, cont = 0;
    do
    {
        printf("Nome: ");
        fgets(name, 100, stdin);
        for (int i = 0; i < QTD; i++)
        {
            printf("Questao %d: ", i + 1);
            scanf(" %c", &gabAluno[i]);
            if (gabAluno[i] == gabarito[i])
                score += 1;
        }
        printf("Percentual de acertos: %d", (score * 100) / QTD);
        totalScore += score;
        cont += 1;
        score = 0;
    } while (strcmp(name, "fim"));
    printf("Pontuacao media: %d", totalScore / cont);
}