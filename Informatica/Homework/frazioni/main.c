/* Acquire da tastiera due coppie di interi.
Ciascuna coppia indica il numeratore ed il denominatore di una frazione. Visualizzare la somma delle frazioni acquisite ridotta ai minimi termini.*/

#include <stdio.h>

#define D 2

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

void semplificaFrazione(int *numeratore, int *denominatore)
{
    int mcd = MCD(*numeratore, *denominatore);
    *numeratore /= mcd;
    *denominatore /= mcd;
}

int main()
{
    int numeratori[D], denominatori[D];

    for (int i = 0; i < D; i++)
    {
        printf("Inserisci il numeratore e il denominatore della frazione %d:\n", i + 1);
        scanf("%d %d", &numeratori[i], &denominatori[i]);
    }

    int numeratoreSomma = numeratori[0] * denominatori[1] + numeratori[1] * denominatori[0];
    int denominatoreSomma = denominatori[0] * denominatori[1];

    semplificaFrazione(&numeratoreSomma, &denominatoreSomma);

    printf("La somma delle frazioni ridotta ai minimi termini e': %d/%d\n", numeratoreSomma, denominatoreSomma);

    return 0;
}