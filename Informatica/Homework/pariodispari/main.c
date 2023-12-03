/*Acquisire da tastiera una successione di interi che termina con il primo 0 immesso
 e visualizzare dopo aver acquisito ciascun intero un messaggio che indica se l’intero acquisto è pari oppure dispari.*/
#include <stdio.h>

int main()
{
  int num;

  while (1)
  {
    printf("Inserisci un numero intero (0 per terminare): ");
    scanf("%d", &num);

    if (num == 0)
    {
      break;
    }

    if (num % 2 == 0)
    {
      printf("Il numero %d è pari\n", num);
    }
    else
    {
      printf("Il numero %d è dispari\n", num);
    }
  }

  return 0;
}