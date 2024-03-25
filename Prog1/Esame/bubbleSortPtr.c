#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

void bubbleSort(int *array, size_t size);

int main()
{
   int array[SIZE];
   srand(time(NULL));

   puts("L'array non ordinato si presenta così:");
   for (size_t i = 0; i < SIZE; ++i)
   {
      array[i] = rand() % 100;
      printf("%d ", array[i]);
   }
   puts("");

   bubbleSort(array, SIZE);

   puts("L'array ordinato si presenta così:");

   for (size_t i = 0; i < SIZE; ++i)
   {
      printf("%d ", array[i]);
   }
}
void swap(int *element1Ptr, int *element2Ptr)
{
   int hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
}
void bubbleSort(int *array, size_t size)
{
   for (unsigned int pass = 0; pass < size - 1; ++pass)
   {
      for (size_t i = 0; i < size - 1; ++i)
      {
         if (array[i] > array[i + 1])
         {
            swap(&array[i], &array[i + 1]);
         }
      }
   }
}
