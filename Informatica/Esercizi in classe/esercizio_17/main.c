#include <stdio.h>
#include <string.h>

#define N 3
#define D 20

int main()
{
    char str[D][N], ultima[D - 1] = "";
    int c;

    for (int i = 0; i < N; i++)
    {
        printf(" ->");
        scanf("%s", str[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (strcmp(str[i], str[D - 1]) < 0)
        {
            c++;
        }

        if (strcmp(str[i], ultima) > 0)
        {
            strcpy(ultima, str[i]);
        }
    }

    printf("Numero di parole lessicograficamente %s: %d\n", str[D - 1], c);
    printf("L'ultima parole è: %s", ultima);
    return 0;
}