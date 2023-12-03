#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define D 21

int main()
{
    int l = 0, p;
    char parola[D], anagramma[D];

    srand(time(NULL));

    printf("Inserisci una parola (max %d caratteri): ", D - 1);
    scanf("%20s", parola);

    l = strlen(parola);

    for (int i = 0; i < l; i++)
    {
        anagramma[i] = '-';
    }

    for (int i = 0; i < l; i++)
    {
        do
        {
            p = rand() % l;
        } while (anagramma[p] != '-');
        anagramma[p] = parola[i];
    }

    anagramma[l] = '\0';

    printf("Parola originale: %s\n", parola);
    printf("Anagramma generato: %s\n", anagramma);

    return 0;
}
