/*Si acquisisca da tastiera una sequenza di parole che termina con la 50-esima parola acquisita o con l’acquisizione della parola “fine”.
Si assume per questo che le parole acquisite contengano al massimo 19 lettere.
Successivamente si visualizzi quante parole seguono lessicograficamente la prima parola acquisita (“fine” esclusa).
Infine si visualizzi quali sono queste parole.*/

#include <stdio.h>
#include <string.h>

#define L 20
#define N 50

int main()
{
    char s[L][N], r[L * N];
    int i = 0, c = 0;

    do
    {
        printf("->");
        scanf("%s", s[i]);
        i++;
    } while (strcmp(s[i - 1], "fine") != 0 && i < N);

    if (strcmp(s[i], "fine") == 0)
        i -= 1;

    printf("%s\n", s[i]);

    for (int j = 0; j < i; j++)
    {
        if (strcmp(s[j], s[0]) > 0)
        {
            printf("La parola %s segue %s\n", s[j], s[0]);
            strcat(r, strcat(s[j], " "));
            c++;
        }
    }

    printf("Le parole che seguono %s, sono: %d\n", s[0], c);
    printf("%s\n", r);
}