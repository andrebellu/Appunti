#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define R 10
#define C 5

int main()
{
    int m[R][C] = {0}, conv;
    srand(time(NULL));

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            m[i][j] = rand() % 2;
            printf("%5d\t", m[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < R; i++)
    {
        conv = 0;
        for (int j = 0; j < C; j++)
        {
            conv += m[i][j] * pow(2, (C - 1 - j));
        }
        printf("Il numero della riga %d in decimale è: %d\n", i, conv);
    }

    return 0;
}