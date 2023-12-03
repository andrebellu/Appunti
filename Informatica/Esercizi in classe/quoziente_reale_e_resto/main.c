/*Scrivi un programma in C che legge da tastiera due numeri interi x e y.
Il programma deve stampare il resto della divisione tra x e y e il quoziente reale della divisione tra x e y, arrotondato a due cifre decimali.*/

#include <stdio.h>

int main(void)
{
    int x, y;
    int resto = 0;
    float q = 0.0;

    scanf("%d%d", &x, &y);
    resto = x % y;
    q = (float)x / y;

    printf("Il resto e' %d\n", resto);
    printf("Il quozioente reale e' %.2f\n", q);

    return 0;
}