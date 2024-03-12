#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 10

void bubble(int work[], size_t size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int main()
{
   int array[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

   printf("Inserire 1 per ordine ascendente, 2 per ordine discendente: ");

   unsigned int ordine;
   scanf("%d", &ordine);

   puts("Array non ordinato");

   for (size_t i = 0; i < SIZE; ++i)
   {
      printf("%d ", array[i]);
   }
   puts("");

   if (ordine == 1)
   {
      bubble(array, SIZE, ascending);
      puts("Array ordinato in maniera ascendente");
   }
   else
   {
      bubble(array, SIZE, descending);
      puts("Array ordinato in maniera discendente");
   }

   for (size_t i = 0; i < SIZE; ++i)
   {
      printf("%d ", array[i]);
   }
}

void bubble(int array[], size_t size, int (*compare)(int a, int b))
{
   void swap(int *elemento1Ptr, int *elemento2Ptr);

   for (unsigned int pass = 0; pass < size - 1; ++pass)
   {
      for (size_t count = 0; count < size - 1; ++count)
      {
         if ((*compare)(array[count], array[count + 1]))
         {
            swap(&array[count], &array[count + 1]);
         }
      }
   }
}
void swap(int *elemento1Ptr, int *elemento2Ptr)
{
   int hold = *elemento1Ptr;
   *elemento1Ptr = *elemento2Ptr;
   *elemento2Ptr = hold;
}

int ascending(int a, int b)
{
   return b < a;
}

int descending(int a, int b)
{
   return b > a;
}