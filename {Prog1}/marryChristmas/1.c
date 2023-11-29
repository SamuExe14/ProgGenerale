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

void randomizza(bool array[ARRAY][ARRAY])
{
     srand(time(NULL));
     for (size_t row = 0; row < ARRAY; ++row)
     {
          puts("");
          for (size_t column = 0; column < ARRAY; ++column)
          {
               array[row][column] = rand() % 2;
               printf("[%d] ", array[row][column]);
          }
     }
     puts("");
}

void santone(bool array[ARRAY][ARRAY])
{

     // size_t santone = array[ARRAY - 5][ARRAY - 4];

     for (size_t row = 5; row <= ARRAY; ++row)
     {
          for (size_t column = 4; column <= ARRAY; column)
          {

          }
     }
}

int main()
{
     bool rajasthan[ARRAY][ARRAY] = {0};

     randomizza(rajasthan);
     // santone(rajasthan);
}