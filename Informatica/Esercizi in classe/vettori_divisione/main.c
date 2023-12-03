#include <stdio.h>

#define DIM 10

int main()
{
    int v[DIM] = {0};

    for (int i = 0; i < DIM; i++)
    {
        if (i % 2 == 0)
        {
            printf("Dividendo -> ");
        }
        else
        {
            printf("Divisore -> ");
        }
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < DIM - 1; i++)
    {
        printf("Il risultato della divisione tra %d e %d e: %d\n", v[i], v[i + 1], v[i] / v[i + 1]);
        printf("Il resto della divisione tra %d e %d e: %d\n", v[i], v[i + 1], v[i] % v[i + 1]);
        printf("----------------------");
    }

    return 0;
}