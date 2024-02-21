#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

typedef struct
{
    int h;
    int m;
} Ora;

int pre_h(Ora hs, Ora x, Ora y)
{
    int x_c = x.h * 60 + x.m;
    int y_c = y.h * 60 + y.m;
    int hs_c = hs.h * 60 + hs.m;

    int max = x_c > y_c ? x_c : y_c;
    int min = x_c < y_c ? x_c : y_c;

    if (hs_c > min && hs_c < max)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int delete_h(Ora *hs, Ora x, Ora y)
{
    int k = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (pre_h(hs[i], x, y))
        {
            hs[k] = hs[i];
            k++;
        }
    }

    for (int i = k; i < SIZE; i++)
    {
        hs[i].h = 0;
        hs[i].m = 0;
    }

    return k;
}

void print_h(Ora *hs, int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("H %d: %2d:%2d\n", i + 1, hs[i].h, hs[i].m);
    }
}

int main()
{
    Ora hs[SIZE], input_1, input_2;

    for (int i = 0; i < SIZE; i++)
    {
        hs[i].h = rand() % 24;
        hs[i].m = rand() % 60;
    }

    printf("Generated hours:\n");
    print_h(hs, SIZE);

    printf("Insert first hour: ");
    scanf("%d", &input_1.h);
    printf("\nInsert first minute: ");
    scanf("%d", &input_1.m);
    printf("\nInsert second hour: ");
    scanf("%d", &input_2.h);
    printf("\nInsert second minute: ");
    scanf("%d", &input_2.m);

    int k = delete_h(hs, input_1, input_2);
    print_h(hs, k);
}