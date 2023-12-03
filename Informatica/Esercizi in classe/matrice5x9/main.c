#include <stdio.h>
#include <stdlib.h>

#define R 5
#define C 9

int main()
{
    int m[5][9] = {0}, m_c = 0, b_c = 0, pos = 0;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            m[i][j] = (rand() % 121) - 60;
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < R; i++)
    {
        pos = 0;
        for (int j = 0; j < C; j++)
        {
            if (m[j][i] > 0)
            {
                pos++;
            }
        }

        if (pos >= m_c)
        {
            m_c = pos;
            b_c = i;
        }
    }

    printf("La colonna migliore e':\n");
    for (int i = 0; i < R; i++)
    {
        printf("%d\n", m[i][b_c]);
    }

    return 0;
}