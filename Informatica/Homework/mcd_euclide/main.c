/* Acquisire da tastiera due interi e visualizzare il loro massimo comune divisore, calcolato utilizzando l’algoritmo di Euclide **implementato tramite cicli**.
Si ricorda che l'algoritmo di Euclide prevede che: MCD(x,y) = x (oppure y) se x = y, MCD(x,y) = MCD(x-y,y) se x > y, MCD(x,y) = MCD(x,y-x) se y > x.*/

#include <stdio.h>

int MCD(int a, int b)
{
    int resto;

    while (b != 0)
    {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main()
{
    int x, y, mcd;

    printf("Inserisci il primo numero: ");
    scanf("%d", &x);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &y);

    mcd = MCD(x, y);
    printf("Il massimo comune divisore di %d e %d è: %d\n", x, y, mcd);

    return 0;
}
