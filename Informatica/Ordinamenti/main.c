#include <stdio.h>

void ordinamento_diretto(int vet[], int n)
{
    int i, j, x;
    for (i = 1; i < n; i++)
    {
        x = vet[i];
        for (j = i - 1; j >= 0 && x < vet[j]; j--)
            vet[j + 1] = vet[j];
        vet[j + 1] = x;
    }

    printf("\n");
    for (i = 0; i < n; i++)
        printf("%d ", vet[i]);
}

void ordinamento_selezione(int vet[], int n)
{
    int i, j, k, x;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        x = vet[i];

        for (j = i + 1; j < n; j++)
        {
            if (vet[j] < x)
            {
                k = j;
                x = vet[j];
            }
        }
        vet[k] = vet[i];
        vet[i] = x;
    }

    printf("\n");
    for (i = 0; i < n; i++)
        printf("%d ", vet[i]);
}

void bubble_sort(int vet[], int n)
{
    int i, j, x;
    for (i = 0; i < n - 1; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            if (vet[j - 1] > vet[j])
            {
                x = vet[j - 1];
                vet[j - 1] = vet[j];
                vet[j] = x;
            }
        }
    }

    printf("\n");
    for (i = 0; i < n; i++)
        printf("%d ", vet[i]);
}

int main()
{
    int vet[10] = {1, 3, 2, 4, 5, 6, 7, 10, 9, 8};

    ordinamento_diretto(vet, 10);

    ordinamento_selezione(vet, 10);

    bubble_sort(vet, 10);
    return 0;
}