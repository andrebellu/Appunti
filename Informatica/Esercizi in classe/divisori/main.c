/* Scrivi un programma in C che legge da tastiera un numero intero k e stampa tutti i suoi divisori. */

#include <stdio.h>

int main()
{
    int k = 0;
    printf("Inserisci il numero:\n");
    scanf("%d", &k);

    for (int i = 0; i < k; i++)
    {
        if (k % i == 0)
        {
            printf("%d è divisore di %d\n", i, k);
        }
    }
}