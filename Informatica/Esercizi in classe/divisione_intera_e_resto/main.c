/* Scrivi un programma in C che legge da tastiera due numeri interi x e y. Il programma deve stampare il risultato della divisione di x per y, se y è diverso da zero.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y = 0;

    scanf("%d%d", &x, &y);

    if (y != 0)
    {
        printf("Il risultato è: %d\n", (int)x / y);
        printf("Il resto è: %d\n", x % y);
    }
}