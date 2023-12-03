#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define D 21

int main()
{
    int l = 0;
    char parola[D];

    scanf("%20s", parola);
    l = strlen(parola);

    for (int i = 0; i < l / 2; i++)
    {
        char temp = parola[i];
        parola[i] = parola[l - 1 - i];
        parola[l - 1 - i] = temp;
    }

    printf("%s\n", parola);

    return 0;
}
