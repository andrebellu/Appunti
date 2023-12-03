/* Scrivi un programma in C che legge da tastiera un numero n e poi n numeri interi. Il programma deve stampare il numero maggiore tra i numeri inseriti. */

#include <stdio.h>

int main()
{
    int m = 0;
    int x = 0;
    int n = 0;

    printf("Scegli quanti numeri confrontare:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Seleziona il numero %d\n", i + 1);

        scanf("%d", &x);

        if (x > m)
        {
            m = x;
        }
    }

    printf("Il numero maggiore è = %d\n", m);
}