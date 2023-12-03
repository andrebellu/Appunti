#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 2
#define C 2

int main()
{
    int m[R][C] = {0}, s[C] = {0}, pos[C] = {0};

    srand(time(NULL));

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            m[i][j] = (rand() % 101) - 20;
            printf("%5d\t", m[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            if (m[j][i] > 0)
            {
                s[i] += m[j][i];
                pos[i]++;
            }
        }
    }

    printf("Somma degli elementi delle righe:\n");
    for (int i = 0; i < C; i++)
    {
        printf("Somma colonna %d: %d\n", i, s[i]);
        printf("Media colonna %d: %d\n", i, s[i] / pos[i]);
    }
}