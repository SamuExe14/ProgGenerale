#include <stdio.h>
#define SIZE 10

void bubbleSort(int *const array, const size_t size);

int main()
{

     int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

     puts("Data items in original order are:");

     for (size_t i = 0; i < SIZE; ++i)
     {
          printf("[%d]", a[i]);
     }
     puts("");

     bubbleSort(a, SIZE);

     puts("Data items in ascending order are:");

     for (size_t i = 0; i < SIZE; ++i)
     {
          printf("[%d]", a[i]);
     }
     puts("");
}

void bubbleSort(int *const array, size_t size)
{

     void swap(int *element1Ptr, int *element2Ptr);

     for (unsigned int pass = 0; pass < size - 1; ++pass)
     {
          for (size_t j = 0; j < size - 1; ++j)
          {
               if (array[j] > array[j + 1])
               {
                    int hold = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = hold;
               }
          }
     }
}

void swap(int *element1Ptr, int *element2Ptr)
{
     int hold = *element1Ptr;
     *element1Ptr = *element2Ptr;
     *element2Ptr = hold;
}