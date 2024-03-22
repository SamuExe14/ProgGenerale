#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 12

int lancioDadi(int dado1, int dado2, int risultato, int array[])
{
     srand(time(NULL));
     for (int x = 0; x <= 36000; ++x)
     {
          dado1 = 1 + rand() % 6;
          dado2 = 1 + (rand() % 6);
          risultato = dado1 + dado2;
          ++array[risultato];
     }
     return dado1 + dado2;
}

int printIndex()
{
     for (int index = 2; index <= 12; ++index)
     {
          printf("[%d]", index);
          printf("\t");
     }
}

int main()
{
     int arrayDadi[SIZE] = {0};
     int dado1, dado2;
     int risultato;

     lancioDadi(dado1, dado2, risultato, arrayDadi);

     printIndex();
     puts("");
     for (int j = 2; j <= SIZE; ++j)
     {
          printf("%2d", arrayDadi[j]);
          printf("\t");
     }
     puts("");
}