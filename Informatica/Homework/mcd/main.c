/* Acquisire da tastiera due naturali x e y e visualizzare il loro massimo comune divisore,
calcolato verificando se ciascun naturale inferiore a x e y sia o meno divisore di entrambi i naturali x e y. */

#include <stdio.h>

int main()
{
    int x, y;
    printf("Inserisci x: ");
    scanf("%d", &x);
    printf("Inserisci y: ");
    scanf("%d", &y);

    int mcd = 1;
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            mcd = i;
        }
    }

    printf("Il massimo comune divisore di %d e %d e': %d\n", x, y, mcd);

    return 0;
}
