/*Riempire una tabella di 4 righe e 3 colonne con interi pseudo-casuali compresi tra 1 e 9 (estremi inclusi).
Per ciascuna riga della tabella visualizzare la somma degli interi presenti sulla riga e, successivamente, visualizzare la somma degli interi presenti su ciascuna colonna.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tabella[4][3];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            tabella[i][j] = rand() % 9 + 1;
        }
    }

    printf("Tabella generata:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", tabella[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++)
    {
        int somma = 0;
        for (j = 0; j < 3; j++)
        {
            somma += tabella[i][j];
        }
        printf("Somma riga %d: %d\n", i + 1, somma);
    }

    for (j = 0; j < 3; j++)
    {
        int somma = 0;
        for (i = 0; i < 4; i++)
        {
            somma += tabella[i][j];
        }
        printf("Somma colonna %d: %d\n", j + 1, somma);
    }

    return 0;
}
