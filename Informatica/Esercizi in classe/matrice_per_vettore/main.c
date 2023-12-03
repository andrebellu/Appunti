#include <stdio.h>
#include <stdlib.h>

#define R 4
#define C 5

int main()
{
    int mat[R][C] = {0}, v[C] = {0}, x[C] = {0};

    printf("Inserisci il vettore da 5 elementi: \n");
    for (int i = 0; i < C; i++)
    {
        printf("->[%d]", i);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            mat[i][j] = rand() % 9 + 1;
            printf("%5d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("Il vettore prodotto è: \n");
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            x[i] += mat[i][j] * v[j];
        }
        printf("%d\n", x[i]);
    }
}