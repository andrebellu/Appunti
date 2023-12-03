#include <stdio.h>

int main()
{
    int dividendi[5], divisori[5], quozienti[5], resti[5];

    for (int i = 0; i < 5; ++i)
    {
        printf("----Coppia %d-----\n", i + 1);
        printf("Inserisci il dividendo: ");
        scanf("%d", &dividendi[i]);

        printf("Inserisci il divisore: ");
        scanf("%d", &divisori[i]);

        quozienti[i] = dividendi[i] / divisori[i];
        resti[i] = dividendi[i] % divisori[i];
    }

    for (int i = 0; i < 5; ++i)
    {
        if (resti[i] == 0)
        {
            printf("Quoziente (senza resto) per la coppia %d, %d = %d\n", dividendi[i], divisori[i], quozienti[i]);
        }
    }

    return 0;
}
