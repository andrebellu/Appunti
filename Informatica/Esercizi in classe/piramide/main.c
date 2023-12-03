/*dato un numero intero n stampare una piramide con n righe, con ciascuna riga composta da tanti numeri quanti il numero della riga, es:
n = 10
1
22
333
4444
55555
666666
7777777
88888888
999999999 */

#include <stdio.h>

int main()
{
    int h = 0;
    scanf("%d", &h);

    printf("----PIRAMIDE----\n");
    for (int i = 1; i < h; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}