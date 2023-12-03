/*Acquisire da tastiera 5 volte due numeri naturali. Si considerino i naturali acquisiti come il dividendo ed il divisore di una divisione.
Dopo ciascuna acquisizione visualizzare il quoziente intero ed il resto.*/

#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d%d", &n, &m);
        printf("Il risultato della divisione è: %d\n", n / m);
        printf("Il resto della divisione è: %d\n", n % m);
    }
}