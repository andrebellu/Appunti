/*Acquisire da tastiera 5 interi e succesivamente
(dopo aver acquisito gli interi) trovare per ciascun numero i suoi divisori*/

#include <stdio.h>

#define DIM 5

int main()
{
    int v[DIM] = {0}, c = 0;

    printf("Inserisci 5 numeri:\n");
    for (int i = 0; i < DIM; i++)
    {
        printf("-> ");
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < DIM; i++)
    {
        printf("----Divisori di %d----\n", v[i]);
        c = 0;
        for (int j = 0; j < v[i]; j++)
        {
            if (v[i] % j == 0)
            {
                printf("%d\n", j);
            }
        }
    }

    return 0;
}