/*Acquisire da tastiera una successione di interi che termina con il primo 0 immesso e visualizzare la media degli interi positivi acquisiti.*/
#include <stdio.h>

int main()
{
    int n = 0;
    int somma = 0;
    int numero = 1;

    while (numero != 0)
    {
        printf("Inserisci un numero (0 per terminare): ");
        scanf("%d", &numero);

        if (numero > 0)
        {
            somma += numero;
            n++;
        }
    }

    if (n > 0)
    {
        printf("La media dei numeri positivi acquisiti è: %.2f\n", (double)somma / n);
    }
    else
    {
        printf("Non sono stati acquisiti numeri positivi.\n");
    }

    return 0;
}
