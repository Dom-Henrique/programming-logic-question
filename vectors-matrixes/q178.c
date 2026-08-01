#include <stdio.h>
int const LNG = 10;

int main()
{
    int n, V[LNG], i, j, k;
    for (i = 0; i < LNG; i++)
    {
        printf("%d elemento: ", i + 1);
        scanf("%d", &V[i]);
    }
    do
    {
        printf("N: ");
        scanf("%d", &n);
    } while (n < 3 || n > 10);
    for (i = 0, j = 1, k = 2; i < LNG && j < LNG - 1 && k < LNG - 2; i++, j++, k++)
    {
        if (V[i] < V[j] && V[j] < V[k])
            printf("(%d, %d, %d)", V[i], V[j], V[k]);
    }
}