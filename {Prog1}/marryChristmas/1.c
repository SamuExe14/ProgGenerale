/*
Un santone induista si trova nella regione indiana del
Rajasthan, quest'ultima simulata con una matrice
quadrata di boolean in cui il valore true indica la
presenza di un libro sacro. Scrivere una funzione che
prenda in input una matrice di boolean e restituisca il
numero di libri raccolti dal santone che, partendo dal
centro della regione, esegue un movimento casuale
unitario alla volta in una delle quattro direzioni prima
che egli sia traviato dalle usanze oltre colonne.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define ARRAY 7

void santone(bool array[ARRAY][ARRAY])
{
     int counterLibri = 0;
     for (int i = 0; i < 10; ++i)
     {
          size_t row = 1 + rand() % ARRAY;
          size_t column = 1 + rand() % ARRAY;
          if (array[row][column] == 1)
          {
               ++counterLibri;
          }
     }
     printf("Il santone in 10 mosse ha trovato %d libri sacri\n", counterLibri);
}

void randomizza(bool array[ARRAY][ARRAY])
{
     srand(time(NULL));
     for (size_t row = 0; row < ARRAY; ++row)
     {
          puts("");
          for (size_t column = 0; column < ARRAY; ++column)
          {
               array[row][column] = rand() % 2;
               if (row == 3 && column == 3)
               {
                    printf("→");
               }
               printf("[%d] ", array[row][column]);
          }
     }
     puts("");
     santone(array);
}

int main()
{
     static bool rajasthan[ARRAY][ARRAY] = {0};
     puts("La regione del Rajasthan si presenta così e il santone si trova al centro");

     randomizza(rajasthan);
}