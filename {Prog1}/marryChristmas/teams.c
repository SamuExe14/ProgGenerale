#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

bool adiacenti(int array[6][6], short k, double x)
{
     int counter = 0;
     for (size_t column = 0; column < 6; column++)
     {
          for (size_t row = 0; row < 6; row++)
          {
               if (array[column][row] != 0 && array[column][row + 1] != 0)
               {
                    if ((array[column][row]) / (array[column][row + 1]) < x)
                    {
                         counter++;
                    }
               }
          }
     }
     if (counter >= k)
     {
          return true;
          printf("Nell'array ci sono esattamente %d coppie di numeri adiacenti", counter);
     }
}

int main()
{
     short k = 2;
     double x = 3;
     static int array[6][6] = {0};
     srand(time(NULL));
     for (size_t i = 0; i < 4; i++)
     {
          for (size_t j = 0; j < 4; j++)
          {
               array[i][j] = rand() % 10;
               printf("[%d]", array[i][j]);
          }
          puts("");
     }
     adiacenti(array, k, x);
}