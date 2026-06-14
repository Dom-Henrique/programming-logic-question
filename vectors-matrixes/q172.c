#include <stdio.h>
int const LNG = 10;

int main()
{
    int vet[LNG];
    for (int i = 0; i < LNG; i++)
    {
        printf("%d elemento: ", i + 1);
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < LNG-1; i++)
    {
        for (int j = 0; j < LNG-1; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                int reserva = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = reserva;
            }
        }
    }
    printf("Vetor: ");
    for (int i = 0; i < LNG; i++)
    {
        printf("%d ", vet[i]);
    }
}