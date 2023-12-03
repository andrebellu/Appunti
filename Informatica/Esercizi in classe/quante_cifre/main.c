#include <stdio.h>

#define DIM 10

int main()
{
    int cifre[DIM] = {0}, n, resto;

    printf("Inserisci un numero intero:\n");
    scanf("%d", &n);
    do
    {
        resto = n % 10;
        cifre[resto]++;
        n = n / 10;
    } while (n > 0);

    for (int i = 0; i < DIM; i++)
    {
        printf("%d:%d\n", i, cifre[i]);
    }

    return 0;
}