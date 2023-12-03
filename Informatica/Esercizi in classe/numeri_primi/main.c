#include <stdio.h>

int main()
{
    int n = 1;
    int c = 0;
    int d = 0;

    while (n != 0)
    {
        printf("Inserisci il numero:\n");
        scanf("%d", &n);
        d = 0;

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                d++;
            }
        }

        if (d == 1)
        {
            printf("il numero %d è primo\n", n);
            c++;
        }
    }

    printf("in totale hai inserito %d numeri primi", c);
}
