#include <stdio.h>
#include <stdlib.h>

void insertionSort(int array[], size_t length);
void printPass(int array[], size_t lenght, unsigned int pass, size_t index);

int main() {}

void insertionSort(int array[], size_t length)
{
     for (size_t i = 1; i < length; i++) // esegue l'iterazione su lenght - 1 elementi
     {
          size_t moveItem = i; // posizione in cui inserire l'elemento
          int insert = array[i]; // contiene l'elemento da inserire

          while (moveItem > 0 && array[moveItem - 1] > insert) // cerca la posizione dove inserire l'elemento corrente
          {
               array[moveItem] = array[moveItem - 1]; // sposta a destra l'elemento di una posizione
               --moveItem;
          }
          array[moveItem] = insert;// inserisce l'elemento al suo posto
     }
}