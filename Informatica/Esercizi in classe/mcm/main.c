/* Scrivi un programma che legge due interi positivi k e n dall'utente e stampa il loro minimo comune multiplo (mcm). */

#include <stdio.h>

int main()
{
    int k = 0, n = 0, mcm = 0, max = 0;
    scanf("%d%d", &k, &n);

    if (k > n)
    {
        max = k;
    }
    else
    {
        max = n;
    }

    for (int i = max; i <= k * n; i++)
    {
        if (i % n == 0 && i % k == 0)
        {
            mcm = i;
        }
    }

    printf("Il mcm è: %d\n", mcm);
}