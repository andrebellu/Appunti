
/*Acquisire da tastiera una successioni di interi che termina con il primo numero positivo e minore di 1024 immesso. Successivamente visualizzare la conversione in base 2 dell’ultimo intero acquisito.*/
#include <stdio.h>

int main()
{
    int numero;

    printf("Inserisci una successione di interi terminata dal primo numero positivo e minore di 1024:\n");

    do
    {
        scanf("%d", &numero);
    } while (numero <= 0 || numero >= 1024);

    int resto, ris = 0, potenza = 1;
    while (numero > 0)
    {
        resto = numero % 2;
        ris = ris + resto * potenza;
        potenza *= 10;
        numero /= 2;
    }

    printf("Conversione in base 2: %d\n", ris);

    return 0;
}
