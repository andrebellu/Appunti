/* acquisire 5 interi e per ognuno trovare i suoi divisori */

#include <stdio.h>

int main()
{
    int n = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Inserisci il %d numero:", i + 1);
        scanf("%d", &n);
        for (int j = 1; j < n; j++)
        {
            if (n % j == 0)
            {
                printf("%d è un divisore\n", j);
            }
        }
    }
}