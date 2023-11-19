#include <stdio.h>
#define SIZE 10

int bubbleSort(int array[])
{
     for (unsigned int pass = 1; pass < SIZE; ++pass)
     {
          for (size_t i = 0; i < SIZE - 1; ++i)
          {
               if (array[i] > array[i + 1])
               {
                    int hold = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = hold;
               }
          }
     }
}

int main()
{
     int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

     puts("Data items in original order: ");

     for (size_t i = 0; i < SIZE; ++i)
     {
          printf("%4d", a[i]);
     }

     puts("");

     bubbleSort(a);

     puts("Data items in modified order:");

     for (size_t j = 0; j < SIZE; ++j)
     {
          printf("%4d", a[j]);
     }

     puts("");
}
