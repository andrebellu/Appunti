/* Calcola il fattoriale di un numero k. */

#include <stdio.h>

int main()
{
    int k = 0, f = 1;
    scanf("%d", &k);

    for (int i = k; i > 1; i--)
    {
        f *= i;
    }

    printf("Il fattoriale di %d, è: %d\n", k, f);

    return 0;
}