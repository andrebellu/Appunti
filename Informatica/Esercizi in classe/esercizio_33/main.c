#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define R 50
#define C 20

void visualizza(char m[][C], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", m[i]);
    }
}

int inserimento(char m[][C], int n, char parolaVietata[])
{
    char cognome[C];

    printf("Inserisci il cognome: ");
    scanf("%s", cognome);

    if (strcmp(cognome, parolaVietata) == 0)
        return n;

    strcpy(m[n], cognome);

    return ++n;
}

int cancella(char m[][C], int n, char parola[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(m[i], parola) == 0)
        {
            for (int j = i; j < n; j++)
            {
                strcpy(m[j], m[j + 1]);
            }
            n--;
        }
    }

    return n;
}

int main()
{
    char cognomi[R][C];
    int n = 0, n_old;

    do
    {
        n_old = n;
        n = inserimento(cognomi, n, "fine");
    } while (n < R && n != n_old);

    visualizza(cognomi, n);

    printf("Vuoi cancellare un cognome? ");
    char risposta[1];

    scanf("%s", risposta);

    if (strcmp(risposta, "s") == 0)
    {
        char cognome[C];

        printf("Inserisci il cognome da cancellare: ");
        scanf("%s", cognome);

        int l = cancella(cognomi, n, cognome);
        printf("Nuovo numero di cognomi: %d\n", l);

        visualizza(cognomi, n);
    }
}