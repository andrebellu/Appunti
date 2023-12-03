#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 5
#define C 12

int main()
{
    int m[R][C] = {0}, s[R] = {0};

    srand(time(NULL));

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            m[i][j] = (rand() % 81) - 40;
            printf("%5d\t", m[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            s[i] += m[i][j];
        }
    }

    printf("Somma degli elementi delle righe:\n");
    for (int i = 0; i < R; i++)
    {
        printf("%d\n", s[i]);
    }
}