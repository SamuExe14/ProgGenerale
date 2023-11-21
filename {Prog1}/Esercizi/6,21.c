#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Se la persona scrive 1, allora il vostro programma deve assegnare un posto in prima classe
(posti da 1 a 5). Se la persona scrive 2, allora il vostro programma deve assegnare un posto
in classe economy (posti da 6 a 10). Il vostro programma deve quindi stampare una carta
d’imbarco indicante il numero del posto della persona e se questo si trova in prima classe o
in classe economy.
Usate un array unidimensionale per rappresentare la mappa dei posti dell’aereo. Inizializza-
te tutti gli elementi dell’array a 0 per indicare che tutti i posti sono vuoti. Quando ogni posto
viene assegnato, ponete l’elemento corrispondente dell’array a 1 per indicare che il posto
non è più disponibile.
Il vostro programma, naturalmente, non deve mai assegnare un posto che è già stato assegna-
to. Quando la prima classe è piena, il vostro programma deve domandare alla persona se è
disposta ad accettare un posto in classe economy (e viceversa). Se lo è, assegnate il posto
appropriato; se non lo è, stampate il messaggio "Next flight leaves in 3 hours.
*/
int printArray(int array[9])
{
     for (int x = 0; x < 9; ++x)
     {
          printf("[%d]", array[x]);
     }
}

int main()
{

     char classe;

     static int arrayPosti[9] = {0};
     int posto;

     for (int i = 0; i < 9; i++)
     {
     puts("Please type 1 for \"first class\"");
     puts("Please type 2 for \"economy\"");
          classe = getchar();

          switch (classe)
          {
          case '1':
               srand(time(NULL));
               posto = rand() % 6;

               if (arrayPosti[posto] == 0)
               {
                    ++arrayPosti[posto];
                    printf("Nice, your seat in first class is the number %d\n", posto);
               }
               else
               {
                    puts("Seat no more available, try again");
                    --i;
               }
               break;

          case '2':
               srand(time(NULL));
               if (arrayPosti[posto] == 0)
               {
                    ++arrayPosti[posto];
                    printf("Nice, your seat in economy is the number %d\n", posto);
               }
               else
               {
                    puts("Seat no more available orcoddio, try again");
                    --i;
               }
               break;

          case ' ':
          case '\t':
          case '\n':
               break;

          default:
               puts("Enter a valid number");
               --i;
          }
     }
     // for (int x = 0; x < 9; ++x)
     // {
     //      printf("%d", arrayPosti[x]);
     // }

     printArray(arrayPosti);
}