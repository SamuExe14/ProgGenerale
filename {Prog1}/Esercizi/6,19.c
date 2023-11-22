#include <stdio.h>
#include <stdlib.h>
#define SIZE 12

int lancioDadi(int dado1, int dado2)
{
     dado1 = 1 + rand() % 6;
     dado2 = 1 + (rand() % 6);

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

     for (int i = 0; i <= 36000; ++i)
     {
          risultato = lancioDadi(dado1, dado2);
          ++arrayDadi[risultato];
     }
     printIndex();
     puts("");
     for (int j = 2; j <= SIZE; ++j)
     {
          printf("%2d", arrayDadi[j]);
          printf("\t");
     }
     puts("");
}