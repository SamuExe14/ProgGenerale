#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip()
{
     int j;
     srand(time(NULL));

     int headCounter = 0;
     int tailCounter = 0;
     for (int i = 0; i <= 100; ++i)
     {
          j = rand() % 2;

          if (j == 0)
          {
               tailCounter++;
               puts("Tail");
          }
          else if (j == 1)
          {
               headCounter++;
               puts("Head");
          }
     }
     printf("E' stata lanciata %d volte croce\n", tailCounter);
     printf("E' stata lanciata %d volte testa\n", headCounter);
}

int main()
{
     flip();
}
