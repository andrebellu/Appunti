#include <stdio.h>
#include <stdlib.h>

#define D 10

void visualizza(float v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", v[i]);
    }
}

int cerca(float v[], int n, float x)
{
    int i;
    for (i = 0; i < n && v[i] != x; i++)
        if (i == n)
            return -1;
    return i;
}

int inserisci(float v[], int n, float x)
{
    int i;
    if (n == D)
        return n;
    for (i = 0; i < n && v[i] < x; i++)
        ;
    for (int j = n; j > i; j--)
        v[j] = v[j - 1];
    v[i] = x;
    return n + 1;
}

int elimina(float v[], int n, float x)
{
    int i;
    if (n == 0)
        return n;
    for (i = 0; i < n && v[i] != x; i++)
        ;
    if (i == n)
        return n;
    for (int j = i; j < n - 1; j++)
        v[j] = v[j + 1];
    return n - 1;
}

int main()
{
    float v[D], r;
    int len = 0;
    do
    {
        r = (rand() % 101) / 100.0;
        len = inserisci(v, len, r);
    } while (len < D);

    visualizza(v, len);

    printf("\nVuoi cancellare un valore? (s/n)\n ");
    char c;
    scanf("%c", &c);
    if (c == 's')
    {
        printf("Inserisci il valore da cancellare: ");
        float x;
        scanf("%f", &x);
        len = elimina(v, len, x);
        visualizza(v, len);
    }

    return 0;
}