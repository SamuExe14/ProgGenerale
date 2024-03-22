#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int array[], size_t length);
void swap(int array[], size_t first, size_t second);

void selectionSort(int array[], size_t length)
{
     for (size_t i = 0; i < length; i++)
     {
          size_t smallest = i;
          for (size_t j = i + 1; j < length; ++j)
          {
               if (array[j] < array[smallest])
               {
                    smallest = j;
               }
          }
          swap(array, i, smallest);
     }
}
void swap(int array[], size_t first, size_t second) {
     int temp = array[first];
     array[first] = array[second];
     array[second] = temp;
}