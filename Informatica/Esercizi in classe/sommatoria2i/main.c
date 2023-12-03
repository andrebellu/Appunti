/* Calcola la sommatoria di 2i (con i che va da n a m) di due numeri m ed n*/

#include <stdio.h>

int main()
{
    int n = 0, m = 0, max = 0, t = 0, min = 0;
    printf("Inserisci il numero: \n");
    scanf("%d%d", &n, &m);

    // aggiunta del controllo minimo e massimo
    if (n > m)
    {
        min = m;
        max = n;
    }
    else
    {
        min = n;
        max = m;
    }

    for (int i = min; i < max; i++)
    {
        t += 2 * i;
    }

    printf("La sommatoria è: %d\n", t);
}