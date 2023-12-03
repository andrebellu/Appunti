/*Scrivi un programma che legge un numero in virgola mobile x dall'utente e stampa la parte frazionaria di x.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, d;
    int n;

    scanf("%f", &x);

    n = (int)x;
    d = x - n;

    if (d != 0.0)
    {
        printf("%.2f\n", d);
    }

    return 0;
}