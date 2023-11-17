#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip()
{
     int j;

     for (int i = 0; i <= 100; ++i)
     {
          srand(time(NULL));

          j = rand() % 1;

          if (j == 0)
          {
               puts("Croce");
          }
          else if (j == 1)
          {
               puts("Testa");
          }
     }
}

int main()
{
     flip();
}