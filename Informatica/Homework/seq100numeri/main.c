#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int sequenza[100];

    for (int i = 0; i < 100; i++)
    {
        sequenza[i] = rand() % 101 - 50;
    }

    int primoMinimo = sequenza[0];
    int secondoMinimo = sequenza[0];

    for (int i = 1; i < 100; i++)
    {
        if (sequenza[i] < primoMinimo)
        {
            secondoMinimo = primoMinimo;
            primoMinimo = sequenza[i];
        }
        else if (sequenza[i] < secondoMinimo && sequenza[i] != primoMinimo)
        {
            secondoMinimo = sequenza[i];
        }
    }

    printf("La sequenza generata è:\n");
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", sequenza[i]);
    }

    printf("\nIl secondo intero più piccolo nella sequenza è: %d\n", secondoMinimo);

    return 0;
}
